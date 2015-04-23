#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

//check the sum
unsigned short checksum(unsigned short *b, int bufsize) {
  unsigned long sum = 0;
  while (bufsize > 1) 
  {
    sum += *b;
    b++;
    bufsize -= 2;
  }
  if (bufsize == 1) 
    sum += *(unsigned char *)b;

  sum = (sum & 0xffff) + (sum >> 16);
  sum = (sum & 0xffff) + (sum >> 16);

  return ~sum;
}

//calculate the time
double timeSub(struct timeval timeInterval1, struct timeval timeInterval2) {
  int time = (timeInterval2.tv_sec - timeInterval1.tv_sec) * 1000000 + ((int)timeInterval2.tv_usec - (int)timeInterval1.tv_usec);
  return time / 1000.0;
}

//the main ping function
void ping(char *host) {
  int sockNumber;
  sockNumber = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);
  //If it has some problem;
  if (sockNumber < 0) {
    perror("socket");
    exit(1);
  }

  int n = 20;
  char buf[2000];
  printf("PING begin:\n");


  while (n--) {
    //initialize
    struct iphdr ipd;
    ipd.version = 4;
    ipd.ttl = 64;

    //set icmp
    struct icmphdr icmph;
    icmph.type = ICMP_ECHO;
    icmph.code = 0;
    icmph.checksum = 0;
    icmph.un.echo.id = 0;
    icmph.un.echo.sequence = n;
    icmph.checksum = checksum((unsigned short *)&icmph, sizeof(icmph));

    int x;
    struct icmphdr *icmphdrptr;
    struct iphdr *iphdrptr;
    int packet_size = sizeof (struct iphdr) + sizeof (struct icmphdr);

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(host);
    memset(&icmph, 0, packet_size);

    //calculate the time
    struct timeval timeInterval1, timeInterval2;
    double RTT;
    (void)gettimeofday(&timeInterval1, (struct timezone *)NULL);
    x = sendto(sockNumber, (char *)&icmph, sizeof(icmph), 0, (struct sockaddr *)&addr, sizeof(addr));
    if (x < 1) 
    {
      perror("sendto");
      exit(1);
    }
    memset(buf, 0, sizeof(buf));
    x = recv(sockNumber, buf, sizeof(buf), 0);
    if (x < 1) {
      perror("recv");
      exit(1);
    }
    (void)gettimeofday(&timeInterval2, (struct timezone *)NULL);
    iphdrptr = (struct iphdr *)buf;
    icmphdrptr = (struct icmphdr *)(buf + (iphdrptr->ihl * 4));
    if (icmphdrptr->type == ICMP_ECHOREPLY) {
      struct in_addr ip_addr;
      ip_addr.s_addr = iphdrptr->saddr;
      RTT = timeSub(timeInterval1, timeInterval2);
      //print the result
      printf("from %s: icmp_seq=%d ttl=%d time=%.2f ms\n", inet_ntoa(ip_addr), icmphdrptr->un.echo.sequence, iphdrptr->ttl, RTT);
    } 
    else {
      printf("received ICMP %d\n", icmphdrptr->type);
    }
  }

  close(sock);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("input IP address\n");
    exit(1);
  }

  ping(argv[1]);
  return 0;
}
