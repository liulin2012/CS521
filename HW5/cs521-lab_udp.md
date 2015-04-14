#cs521-lab:udp
##lin liu 10397798
###p1

```
No.     Time           Source                Destination           Protocol Length Info
      1 0.000000000    155.246.139.73        155.246.139.255       UDP      56     Source port: 57842  Destination port: 2008

Frame 1: 56 bytes on wire (448 bits), 56 bytes captured (448 bits) on interface 0
Ethernet II, Src: IntelCor_e1:40:bf (c4:d9:87:e1:40:bf), Dst: Broadcast (ff:ff:ff:ff:ff:ff)
Internet Protocol Version 4, Src: 155.246.139.73 (155.246.139.73), Dst: 155.246.139.255 (155.246.139.255)
User Datagram Protocol, Src Port: 57842 (57842), Dst Port: 2008 (2008)
    Source Port: 57842 (57842)
    Destination Port: 2008 (2008)
    Length: 17
    Checksum: 0xc5df [validation disabled]
    [Stream index: 0]
Data (9 bytes)

0000  42 43 20 20 34 4f 35 39 35                        BC  4O595
VSS-Monitoring ethernet trailer, Source Port: 54

```

4,source port,destination port,length,checksum

8 bytes

the length field specifies the number of bytes in the UDP segment(head plus data)

(length - 8) bytes is the max numnber of bytes

65535

hexadecimal : 11 , decimal : 17

In the dns protocol,the first udp packet destination port is 53,the source port is 37654.In the second udp packet,the source port is also 53,the destination port is 37654.They are same.
