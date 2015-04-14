#CS521-IP
##lin liu 10397798

###p1
155.246.171.71

###p2
ICMP

###p3
20 bytes in IP head and total 56 bytes total length,so the payload is 36 bytes

###p4
the more fragements are 0,so it is not fragmented.

###p5
Identification, checksum always change

###p6
The field must stay constant
version: all packets use ipv4
header length: all packets use ipv4
source ip and destination ip:the ICMP destination and source ip is same
differentiated service: use the ICMP
protocol: use the ICMP

The ttl stay constant but it don't must be constant because the routes send back the ICMP packets,the ICMP packets may use different path althought the probability is small

the identification and checksum is not constant because every icmp packect has its own identification so the checksum also be different.

###p7
The identification increment in each ICMP packet
Sometimes the identification is always 0

###p8

identification is 0
ttl is 255

###p9
the identification should change because it identify each different ip packet,but in this case,the identification is always same.

the ttl will not change,but sometimes it change because the icmp packet my use the different path to the destination.

###p10
yes

###p11
![](http://i.imgur.com/khwHbiG.png)
the flag show there are more fragments
the offset is 0 ,so this is the first ip packet
the length is 1500,including the 20 header length

###p12
![](http://i.imgur.com/svldMij.png)
the offset is 1480
no,because the flag:more fragments is 0

###p13
total length,flags, fragment offset, and checksum. 

###p14
3

###p15
the fragment offset and checksum are different in three fragments
In the first fragments,the total length is 1500,flags:more fragments is 1,offset is 0
In the second fragments,the total length is 1500,flags:more fragments is 1,offset is 1480
In the third fragments,the total length is 540,flags:more fragments is 0,offset is 2960.