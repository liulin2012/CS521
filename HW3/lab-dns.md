#lab-DNS
##lin liu 10397798

###1
```
Name:	whu.edu
Address: 212.184.196.226 
```
###2
```
lin@host-155-246-171-95:~/Google Drive/code/SocialRank $ nslookup -type=NS cam.ca.uk
Server:		155.246.149.79
Address:	155.246.149.79#53

Non-authoritative answer:
cam.ca.uk	nameserver = buy.internettraffic.com.
cam.ca.uk	nameserver = sell.internettraffic.com.

Authoritative answers can be found from:
buy.internettraffic.com	internet address = 208.87.35.121
buy.internettraffic.com	internet address = 208.87.35.120
sell.internettraffic.com	internet address = 176.74.176.169
sell.internettraffic.com	internet address = 176.74.176.170
```

###3
```
lin@host-155-246-171-95:~/Google Drive/code/SocialRank $ nslookup mail.yahoo.com buy.internettraffic.com
Server:		buy.internettraffic.com
Address:	208.87.35.120#53

Name:	mail.yahoo.com
Address: 69.172.201.208
```

###4
UDP.

NDS query

```
No.     Time           Source                Destination           Protocol Length Info
    122 4.154373000    155.246.171.27        155.246.149.79        DNS      72     Standard query 0xa096  A www.ietf.org

Frame 122: 72 bytes on wire (576 bits), 72 bytes captured (576 bits) on interface 0
Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
Internet Protocol Version 4, Src: 155.246.171.27 (155.246.171.27), Dst: 155.246.149.79 (155.246.149.79)
User Datagram Protocol, Src Port: 64136 (64136), Dst Port: 53 (53)
    Source Port: 64136 (64136)
    Destination Port: 53 (53)
    Length: 38
    Checksum: 0xc9b0 [validation disabled]
    [Stream index: 37]
Domain Name System (query)
    [Response In: 123]
    Transaction ID: 0xa096
    Flags: 0x0100 Standard query
    Questions: 1
    Answer RRs: 0
    Authority RRs: 0
    Additional RRs: 0
    Queries
        www.ietf.org: type A, class IN
            Name: www.ietf.org
            [Name Length: 12]
            [Label Count: 3]
            Type: A (Host Address) (1)
            Class: IN (0x0001)

```

DNS response

```
No.     Time           Source                Destination           Protocol Length Info
    123 4.157967000    155.246.149.79        155.246.171.27        DNS      149    Standard query response 0xa096  CNAME www.ietf.org.cdn.cloudflare.net A 104.20.1.85 A 104.20.0.85

Frame 123: 149 bytes on wire (1192 bits), 149 bytes captured (1192 bits) on interface 0
Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
Internet Protocol Version 4, Src: 155.246.149.79 (155.246.149.79), Dst: 155.246.171.27 (155.246.171.27)
User Datagram Protocol, Src Port: 53 (53), Dst Port: 64136 (64136)
    Source Port: 53 (53)
    Destination Port: 64136 (64136)
    Length: 115
    Checksum: 0x6ad0 [validation disabled]
    [Stream index: 37]
Domain Name System (response)
    [Request In: 122]
    [Time: 0.003594000 seconds]
    Transaction ID: 0xa096
    Flags: 0x8180 Standard query response, No error
    Questions: 1
    Answer RRs: 3
    Authority RRs: 0
    Additional RRs: 0
    Queries
        www.ietf.org: type A, class IN
            Name: www.ietf.org
            [Name Length: 12]
            [Label Count: 3]
            Type: A (Host Address) (1)
            Class: IN (0x0001)
    Answers
        www.ietf.org: type CNAME, class IN, cname www.ietf.org.cdn.cloudflare.net
            Name: www.ietf.org
            Type: CNAME (Canonical NAME for an alias) (5)
            Class: IN (0x0001)
            Time to live: 407
            Data length: 33
            CNAME: www.ietf.org.cdn.cloudflare.net
        www.ietf.org.cdn.cloudflare.net: type A, class IN, addr 104.20.1.85
            Name: www.ietf.org.cdn.cloudflare.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 59
            Data length: 4
            Address: 104.20.1.85 (104.20.1.85)
        www.ietf.org.cdn.cloudflare.net: type A, class IN, addr 104.20.0.85
            Name: www.ietf.org.cdn.cloudflare.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 59
            Data length: 4
            Address: 104.20.0.85 (104.20.0.85)

```

###5
53,53
###6
155.246.149.79
same
###7
The type is A.no
###8
three,contain one CNAME and two A type indicate the ip address.
###9
no,there are two ip address in the response message.
###10
no

###11
53,53
###12
155.246.147.79
same
###13
The type is A.no
###14
three,contain one CNAME and two A type indicate the ip address.
###15

```
No.     Time           Source                Destination           Protocol Length Info
     31 2.129565000    155.246.171.27        155.246.149.79        DNS      71     Standard query 0x656e  A www.mit.edu

Frame 31: 71 bytes on wire (568 bits), 71 bytes captured (568 bits) on interface 0
Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
Internet Protocol Version 4, Src: 155.246.171.27 (155.246.171.27), Dst: 155.246.149.79 (155.246.149.79)
User Datagram Protocol, Src Port: 64962 (64962), Dst Port: 53 (53)
    Source Port: 64962 (64962)
    Destination Port: 53 (53)
    Length: 37
    Checksum: 0xd13a [validation disabled]
    [Stream index: 19]
Domain Name System (query)
    [Response In: 34]
    Transaction ID: 0x656e
    Flags: 0x0100 Standard query
    Questions: 1
    Answer RRs: 0
    Authority RRs: 0
    Additional RRs: 0
    Queries
        www.mit.edu: type A, class IN
            Name: www.mit.edu
            [Name Length: 11]
            [Label Count: 3]
            Type: A (Host Address) (1)
            Class: IN (0x0001)

No.     Time           Source                Destination           Protocol Length Info
     34 2.190279000    155.246.149.79        155.246.171.27        DNS      160    Standard query response 0x656e  CNAME www.mit.edu.edgekey.net CNAME e9566.dscb.akamaiedge.net A 23.43.170.35

Frame 34: 160 bytes on wire (1280 bits), 160 bytes captured (1280 bits) on interface 0
Ethernet II, Src: JuniperN_fa:af:f0 (dc:38:e1:fa:af:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
Internet Protocol Version 4, Src: 155.246.149.79 (155.246.149.79), Dst: 155.246.171.27 (155.246.171.27)
User Datagram Protocol, Src Port: 53 (53), Dst Port: 64962 (64962)
    Source Port: 53 (53)
    Destination Port: 64962 (64962)
    Length: 126
    Checksum: 0xdc64 [validation disabled]
    [Stream index: 19]
Domain Name System (response)
    [Request In: 31]
    [Time: 0.060714000 seconds]
    Transaction ID: 0x656e
    Flags: 0x8180 Standard query response, No error
    Questions: 1
    Answer RRs: 3
    Authority RRs: 0
    Additional RRs: 0
    Queries
        www.mit.edu: type A, class IN
            Name: www.mit.edu
            [Name Length: 11]
            [Label Count: 3]
            Type: A (Host Address) (1)
            Class: IN (0x0001)
    Answers
        www.mit.edu: type CNAME, class IN, cname www.mit.edu.edgekey.net
            Name: www.mit.edu
            Type: CNAME (Canonical NAME for an alias) (5)
            Class: IN (0x0001)
            Time to live: 712
            Data length: 25
            CNAME: www.mit.edu.edgekey.net
        www.mit.edu.edgekey.net: type CNAME, class IN, cname e9566.dscb.akamaiedge.net
            Name: www.mit.edu.edgekey.net
            Type: CNAME (Canonical NAME for an alias) (5)
            Class: IN (0x0001)
            Time to live: 3
            Data length: 24
            CNAME: e9566.dscb.akamaiedge.net
        e9566.dscb.akamaiedge.net: type A, class IN, addr 23.43.170.35
            Name: e9566.dscb.akamaiedge.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 20
            Data length: 4
            Address: 23.43.170.35 (23.43.170.35)

```

###16
155.246.149.79
same
###17
NS,no
###18

```
mit.edu: type NS, class IN, ns use2.akam.net
mit.edu: type NS, class IN, ns eur5.akam.net
mit.edu: type NS, class IN, ns ns1-37.akam.net
mit.edu: type NS, class IN, ns asia1.akam.net
mit.edu: type NS, class IN, ns ns1-173.akam.net
mit.edu: type NS, class IN, ns usw2.akam.net
mit.edu: type NS, class IN, ns asia2.akam.net
mit.edu: type NS, class IN, ns use5.akam.net
```

yes,in the additional records
###19
```
No.     Time           Source                Destination           Protocol Length Info
     23 1.946776000    155.246.171.27        155.246.149.79        DNS      67     Standard query 0xf84a  NS mit.edu

Frame 23: 67 bytes on wire (536 bits), 67 bytes captured (536 bits) on interface 0
Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
Internet Protocol Version 4, Src: 155.246.171.27 (155.246.171.27), Dst: 155.246.149.79 (155.246.149.79)
User Datagram Protocol, Src Port: 55120 (55120), Dst Port: 53 (53)
    Source Port: 55120 (55120)
    Destination Port: 53 (53)
    Length: 33
    Checksum: 0xdec6 [validation disabled]
    [Stream index: 13]
Domain Name System (query)
    [Response In: 25]
    Transaction ID: 0xf84a
    Flags: 0x0100 Standard query
    Questions: 1
    Answer RRs: 0
    Authority RRs: 0
    Additional RRs: 0
    Queries
        mit.edu: type NS, class IN
            Name: mit.edu
            [Name Length: 7]
            [Label Count: 2]
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)

No.     Time           Source                Destination           Protocol Length Info
     25 1.950819000    155.246.149.79        155.246.171.27        DNS      446    Standard query response 0xf84a  NS use2.akam.net NS eur5.akam.net NS ns1-37.akam.net NS asia1.akam.net NS ns1-173.akam.net NS usw2.akam.net NS asia2.akam.net NS use5.akam.net

Frame 25: 446 bytes on wire (3568 bits), 446 bytes captured (3568 bits) on interface 0
Ethernet II, Src: JuniperN_fa:af:f0 (dc:38:e1:fa:af:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
Internet Protocol Version 4, Src: 155.246.149.79 (155.246.149.79), Dst: 155.246.171.27 (155.246.171.27)
User Datagram Protocol, Src Port: 53 (53), Dst Port: 55120 (55120)
    Source Port: 53 (53)
    Destination Port: 55120 (55120)
    Length: 412
    Checksum: 0x3c5b [validation disabled]
    [Stream index: 13]
Domain Name System (response)
    [Request In: 23]
    [Time: 0.004043000 seconds]
    Transaction ID: 0xf84a
    Flags: 0x8180 Standard query response, No error
    Questions: 1
    Answer RRs: 8
    Authority RRs: 0
    Additional RRs: 11
    Queries
        mit.edu: type NS, class IN
            Name: mit.edu
            [Name Length: 7]
            [Label Count: 2]
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
    Answers
        mit.edu: type NS, class IN, ns use2.akam.net
        mit.edu: type NS, class IN, ns eur5.akam.net
        mit.edu: type NS, class IN, ns ns1-37.akam.net
        mit.edu: type NS, class IN, ns asia1.akam.net
        mit.edu: type NS, class IN, ns ns1-173.akam.net
        mit.edu: type NS, class IN, ns usw2.akam.net
        mit.edu: type NS, class IN, ns asia2.akam.net
        mit.edu: type NS, class IN, ns use5.akam.net
    Additional records
        use2.akam.net: type A, class IN, addr 96.7.49.64
        eur5.akam.net: type A, class IN, addr 23.74.25.64
        ns1-37.akam.net: type A, class IN, addr 193.108.91.37
        ns1-37.akam.net: type AAAA, class IN, addr 2600:1401:2::25
        asia1.akam.net: type A, class IN, addr 95.100.175.64
        ns1-173.akam.net: type A, class IN, addr 193.108.91.173
        ns1-173.akam.net: type AAAA, class IN, addr 2600:1401:2::ad
        usw2.akam.net: type A, class IN, addr 184.26.161.64
        asia2.akam.net: type A, class IN, addr 95.101.36.64
        use5.akam.net: type A, class IN, addr 2.16.40.64
        use5.akam.net: type AAAA, class IN, addr 2600:1401:1::40

```

###20
I have use the **sitult.stevens-tech.edu** to be the server

```nslookup www.aiit.ac.jp sitult.stevens-tech.edu```

155.246.1.20,no,It's the server ip.

###21
type A,no
###22
two,one is the CNAME and another is A type that indicate the ip address.
###23

```
No.     Time           Source                Destination           Protocol Length Info
     52 1.489398000    155.246.171.27        155.246.1.20          DNS      74     Standard query 0xfef1  A www.aiit.ac.jp

Frame 52: 74 bytes on wire (592 bits), 74 bytes captured (592 bits) on interface 0
Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
Internet Protocol Version 4, Src: 155.246.171.27 (155.246.171.27), Dst: 155.246.1.20 (155.246.1.20)
User Datagram Protocol, Src Port: 59838 (59838), Dst Port: 53 (53)
    Source Port: 59838 (59838)
    Destination Port: 53 (53)
    Length: 40
    Checksum: 0x0110 [validation disabled]
    [Stream index: 30]
Domain Name System (query)
    [Response In: 53]
    Transaction ID: 0xfef1
    Flags: 0x0100 Standard query
    Questions: 1
    Answer RRs: 0
    Authority RRs: 0
    Additional RRs: 0
    Queries
        www.aiit.ac.jp: type A, class IN

No.     Time           Source                Destination           Protocol Length Info
     53 1.494911000    155.246.1.20          155.246.171.27        DNS      523    Standard query response 0xfef1  CNAME aiit.ac.jp A 175.184.120.230

Frame 53: 523 bytes on wire (4184 bits), 523 bytes captured (4184 bits) on interface 0
Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
Internet Protocol Version 4, Src: 155.246.1.20 (155.246.1.20), Dst: 155.246.171.27 (155.246.171.27)
User Datagram Protocol, Src Port: 53 (53), Dst Port: 59838 (59838)
    Source Port: 53 (53)
    Destination Port: 59838 (59838)
    Length: 489
    Checksum: 0x3f1b [validation disabled]
    [Stream index: 30]
Domain Name System (response)
    [Request In: 52]
    [Time: 0.005513000 seconds]
    Transaction ID: 0xfef1
    Flags: 0x8180 Standard query response, No error
    Questions: 1
    Answer RRs: 2
    Authority RRs: 13
    Additional RRs: 13
    Queries
        www.aiit.ac.jp: type A, class IN
    Answers
        www.aiit.ac.jp: type CNAME, class IN, cname aiit.ac.jp
            Name: www.aiit.ac.jp
            Type: CNAME (Canonical NAME for an alias) (5)
            Class: IN (0x0001)
            Time to live: 86374
            Data length: 2
            CNAME: aiit.ac.jp
        aiit.ac.jp: type A, class IN, addr 175.184.120.230
            Name: aiit.ac.jp
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 86025
            Data length: 4
            Address: 175.184.120.230 (175.184.120.230)
    Authoritative nameservers
        <Root>: type NS, class IN, ns j.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 20
            Name Server: j.root-servers.net
        <Root>: type NS, class IN, ns b.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: b.root-servers.net
        <Root>: type NS, class IN, ns l.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: l.root-servers.net
        <Root>: type NS, class IN, ns k.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: k.root-servers.net
        <Root>: type NS, class IN, ns m.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: m.root-servers.net
        <Root>: type NS, class IN, ns h.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: h.root-servers.net
        <Root>: type NS, class IN, ns g.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: g.root-servers.net
        <Root>: type NS, class IN, ns a.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: a.root-servers.net
        <Root>: type NS, class IN, ns e.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: e.root-servers.net
        <Root>: type NS, class IN, ns f.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: f.root-servers.net
        <Root>: type NS, class IN, ns d.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: d.root-servers.net
        <Root>: type NS, class IN, ns i.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: i.root-servers.net
        <Root>: type NS, class IN, ns c.root-servers.net
            Name: <Root>
            Type: NS (authoritative Name Server) (2)
            Class: IN (0x0001)
            Time to live: 305354
            Data length: 4
            Name Server: c.root-servers.net
    Additional records
        l.root-servers.net: type A, class IN, addr 199.7.83.42
            Name: l.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 398456
            Data length: 4
            Address: 199.7.83.42 (199.7.83.42)
        d.root-servers.net: type A, class IN, addr 199.7.91.13
            Name: d.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 139778
            Data length: 4
            Address: 199.7.91.13 (199.7.91.13)
        c.root-servers.net: type A, class IN, addr 192.33.4.12
            Name: c.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 277733
            Data length: 4
            Address: 192.33.4.12 (192.33.4.12)
        e.root-servers.net: type A, class IN, addr 192.203.230.10
            Name: e.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 151413
            Data length: 4
            Address: 192.203.230.10 (192.203.230.10)
        g.root-servers.net: type A, class IN, addr 192.112.36.4
            Name: g.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 298275
            Data length: 4
            Address: 192.112.36.4 (192.112.36.4)
        i.root-servers.net: type A, class IN, addr 192.36.148.17
            Name: i.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 311198
            Data length: 4
            Address: 192.36.148.17 (192.36.148.17)
        k.root-servers.net: type A, class IN, addr 193.0.14.129
            Name: k.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 276238
            Data length: 4
            Address: 193.0.14.129 (193.0.14.129)
        m.root-servers.net: type A, class IN, addr 202.12.27.33
            Name: m.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 294953
            Data length: 4
            Address: 202.12.27.33 (202.12.27.33)
        f.root-servers.net: type A, class IN, addr 192.5.5.241
            Name: f.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 267634
            Data length: 4
            Address: 192.5.5.241 (192.5.5.241)
        h.root-servers.net: type A, class IN, addr 128.63.2.53
            Name: h.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 87062
            Data length: 4
            Address: 128.63.2.53 (128.63.2.53)
        b.root-servers.net: type A, class IN, addr 192.228.79.201
            Name: b.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 384800
            Data length: 4
            Address: 192.228.79.201 (192.228.79.201)
        j.root-servers.net: type A, class IN, addr 192.58.128.30
            Name: j.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 278664
            Data length: 4
            Address: 192.58.128.30 (192.58.128.30)
        a.root-servers.net: type A, class IN, addr 198.41.0.4
            Name: a.root-servers.net
            Type: A (Host Address) (1)
            Class: IN (0x0001)
            Time to live: 299923
            Data length: 4
            Address: 198.41.0.4 (198.41.0.4)

```