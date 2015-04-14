#cs521-icmp
##lin liu 10397798

###p1
my ip address is 155.246.171.87
destination address is 143.89.14.2

###p2
because ICMP is network layer protocal,not transport layer,so only the ip address is enough

###p3
type is 8
code is 0
Other fields: Checksum, Identifier(BE)/(LE), Sequence number(BE)/(LE), and Data field
Checksum, Identifier, Sequence number are 2 bytes each.

###p4
type is 0
code is 0
Other fields: Checksum, Identifier(BE)/(LE), Sequence number(BE)/(LE), and Data field
Checksum, Identifier, Sequence number are 2 bytes each.

###p5
**My operation system is not Windows,so I use the data from the website**
My host ip: 192.168.1.101
Destination host ip: 138.96.146.2

###p6
If ICMP send UCP packets, the IP protocol should be 17

###p7
no,same

###p8
The ICMP error packet include the ICMP echo packet header and the ip header.

###p9
The ICMP type is 0 rather than the 11 ttl exceeded because the ICMP packet reach to the destination before the ttl expire.

###p10
In the figure 4,There are a significant delay between the 9 and 10 which is **att-gw.nyc.opentransit.net(192.205.32.138)** and **P4-0.PASCR1.Pastourelle.opentransit.net(193.251.241.133)**
I have consulted online that the 192.205.32.138 is in California,but the 193.251.241.133 is in France.So the delay is very large because the distance is long between the California and France