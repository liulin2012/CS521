#CS521-lab
##lin liu 10397798
###HTTP

####1.The Basic HTTP GET/response interaction 
**GET**

	No.     Time           Source                Destination           Protocol Length Info
	     77 1.944490000    155.246.171.95        128.119.245.12        HTTP     584    GET /wireshark-labs/HTTP-wireshark-file1.html HTTP/1.1 

	Frame 77: 584 bytes on wire (4672 bits), 584 bytes captured (4672 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 51220 (51220), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 518
	Hypertext Transfer Protocol
	    GET /wireshark-labs/HTTP-wireshark-file1.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/HTTP-wireshark-file1.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/HTTP-wireshark-file1.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/HTTP-wireshark-file1.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    Connection: keep-alive\r\n
	    Cache-Control: max-age=0\r\n
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/40.0.2214.115 Safari/537.36\r\n
	    Accept-Encoding: gzip, deflate, sdch\r\n
	    Accept-Language: en,zh-CN;q=0.8,zh;q=0.6\r\n
	    If-None-Match: "8734d-80-f3fe0380"\r\n
	    If-Modified-Since: Fri, 20 Feb 2015 19:21:02 GMT\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file1.html]
	    [HTTP request 1/1]
	    [Response in frame: 79]
	    
**ok**

	No.     Time           Source                Destination           Protocol Length Info
	     79 1.973962000    128.119.245.12        155.246.171.95        HTTP     493    HTTP/1.1 200 OK  (text/html)

	Frame 79: 493 bytes on wire (3944 bits), 493 bytes captured (3944 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51220 (51220), Seq: 1, Ack: 519, Len: 427
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Fri, 20 Feb 2015 19:25:12 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    Last-Modified: Fri, 20 Feb 2015 19:25:01 GMT\r\n
	    ETag: "8734d-80-23cdd40"\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 128\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    Connection: Keep-Alive\r\n
	    Content-Type: text/html; charset=UTF-8\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.029472000 seconds]
	    [Request in frame: 77]
	Line-based text data: text/html
	
1. Both are 1.1
2. English and Chinese
3. My ip:155.246.171.95 gaia.cs.umass.edu:128.119.245.12
4. 200
5. Fri, 20 Feb 2015 19:25:01 GMT
6. 128bytes
7. Connection

####2.The HTTP CONDITIONAL GET/response interaction
The http content

	No.     Time           Source                Destination           Protocol Length Info
	    219 3.655388000    155.246.171.95        128.119.245.12        HTTP     434    GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1 

	Frame 219: 434 bytes on wire (3472 bits), 434 bytes captured (3472 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 51494 (51494), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 368
	Hypertext Transfer Protocol
	    GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/HTTP-wireshark-file2.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n
	    Accept-Language: en-us\r\n
	    Connection: keep-alive\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file2.html]
	    [HTTP request 1/1]
	    [Response in frame: 227]

	No.     Time           Source                Destination           Protocol Length Info
	    227 3.689264000    128.119.245.12        155.246.171.95        HTTP     737    HTTP/1.1 200 OK  (text/html)

	Frame 227: 737 bytes on wire (5896 bits), 737 bytes captured (5896 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51494 (51494), Seq: 1, Ack: 369, Len: 671
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Fri, 20 Feb 2015 20:38:33 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    Last-Modified: Fri, 20 Feb 2015 20:38:01 GMT\r\n
	    ETag: "d6c96-173-74e5c40"\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 371\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    Connection: Keep-Alive\r\n
	    Content-Type: text/html; charset=UTF-8\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.033876000 seconds]
	    [Request in frame: 219]
	Line-based text data: text/html

	No.     Time           Source                Destination           Protocol Length Info
	    591 9.067334000    155.246.171.95        128.119.245.12        HTTP     520    GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1 

	Frame 591: 520 bytes on wire (4160 bits), 520 bytes captured (4160 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 51498 (51498), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 454
	Hypertext Transfer Protocol
	    GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/HTTP-wireshark-file2.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/HTTP-wireshark-file2.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    If-None-Match: "d6c96-173-74e5c40"\r\n
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n
	    If-Modified-Since: Fri, 20 Feb 2015 20:38:01 GMT\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    Accept-Language: en-us\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    Connection: keep-alive\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file2.html]
	    [HTTP request 1/1]
	    [Response in frame: 599]

	No.     Time           Source                Destination           Protocol Length Info
	    599 9.095963000    128.119.245.12        155.246.171.95        HTTP     247    HTTP/1.1 304 Not Modified 

	Frame 599: 247 bytes on wire (1976 bits), 247 bytes captured (1976 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51498 (51498), Seq: 1, Ack: 455, Len: 181
	Hypertext Transfer Protocol
	    HTTP/1.1 304 Not Modified\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 304 Not Modified\r\n]
	            [HTTP/1.1 304 Not Modified\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 304
	        Response Phrase: Not Modified
	    Date: Fri, 20 Feb 2015 20:38:39 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    Connection: Keep-Alive\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    ETag: "d6c96-173-74e5c40"\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.028629000 seconds]
	    [Request in frame: 591]

8. no
9. yes,there are **Content-Length** and I can see the html content in **Line-based text data: text/html**
10. yes,the information is the time about the last modified **Fri, 20 Feb 2015 20:38:01 GMT**
11. **304 Not Modified**,no,because the file modified time is same to the GET message,so it is unnecesarry to transfer the data again.

####3.Retrieving Long Documents
**GET**

	No.     Time           Source                Destination           Protocol Length Info
	    202 4.158134000    155.246.171.95        128.119.245.12        HTTP     434    GET /wireshark-labs/HTTP-wireshark-file3.html HTTP/1.1 

	Frame 202: 434 bytes on wire (3472 bits), 434 bytes captured (3472 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 51823 (51823), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 368
	Hypertext Transfer Protocol
	    GET /wireshark-labs/HTTP-wireshark-file3.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/HTTP-wireshark-file3.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/HTTP-wireshark-file3.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/HTTP-wireshark-file3.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n
	    Accept-Language: en-us\r\n
	    Connection: keep-alive\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file3.html]
	    [HTTP request 1/1]
	    [Response in frame: 217]

**OK**

	No.     Time           Source                Destination           Protocol Length Info
	    217 4.221530000    128.119.245.12        155.246.171.95        HTTP     747    HTTP/1.1 200 OK  (text/html)

	Frame 217: 747 bytes on wire (5976 bits), 747 bytes captured (5976 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51823 (51823), Seq: 4123, Ack: 369, Len: 681
	[4 Reassembled TCP Segments (4803 bytes): #204(1374), #205(1374), #206(1374), #217(681)]
	    [Frame: 204, payload: 0-1373 (1374 bytes)]
	    [Frame: 205, payload: 1374-2747 (1374 bytes)]
	    [Frame: 206, payload: 2748-4121 (1374 bytes)]
	    [Frame: 217, payload: 4122-4802 (681 bytes)]
	    [Segment count: 4]
	    [Reassembled TCP length: 4803]
	    [Reassembled TCP Data: 485454502f312e3120323030204f4b0d0a446174653a2046...]
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Fri, 20 Feb 2015 21:28:17 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    Last-Modified: Fri, 20 Feb 2015 21:28:02 GMT\r\n
	    ETag: "d6c97-1194-ba2dfc80"\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 4500\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    Connection: Keep-Alive\r\n
	    Content-Type: text/html; charset=UTF-8\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.063396000 seconds]
	    [Request in frame: 202]
	Line-based text data: text/html


1. one,202
2. 217
3. 200 ok
4. 4

####4. HTML Documents with Embedded Objects

	No.     Time           Source                Destination           Protocol Length Info
	    442 9.891907000    155.246.171.95        128.119.245.12        HTTP     434    GET /wireshark-labs/HTTP-wireshark-file4.html HTTP/1.1 

	Frame 442: 434 bytes on wire (3472 bits), 434 bytes captured (3472 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 51915 (51915), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 368
	Hypertext Transfer Protocol
	    GET /wireshark-labs/HTTP-wireshark-file4.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/HTTP-wireshark-file4.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/HTTP-wireshark-file4.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/HTTP-wireshark-file4.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n
	    Accept-Language: en-us\r\n
	    Connection: keep-alive\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file4.html]
	    [HTTP request 1/1]
	    [Response in frame: 444]

	No.     Time           Source                Destination           Protocol Length Info
	    444 9.927609000    128.119.245.12        155.246.171.95        HTTP     1108   HTTP/1.1 200 OK  (text/html)

	Frame 444: 1108 bytes on wire (8864 bits), 1108 bytes captured (8864 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51915 (51915), Seq: 1, Ack: 369, Len: 1042
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Fri, 20 Feb 2015 21:57:44 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    Last-Modified: Fri, 20 Feb 2015 21:57:02 GMT\r\n
	    ETag: "d6d13-2e5-21e44780"\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 741\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    Connection: Keep-Alive\r\n
	    Content-Type: text/html; charset=UTF-8\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.035702000 seconds]
	    [Request in frame: 442]
	Line-based text data: text/html

	No.     Time           Source                Destination           Protocol Length Info
	    457 10.201358000   155.246.171.95        165.193.140.14        HTTP     476    GET /assets/hip/us/hip_us_pearsonhighered/images/pearson_logo.gif HTTP/1.1 

	Frame 457: 476 bytes on wire (3808 bits), 476 bytes captured (3808 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 165.193.140.14 (165.193.140.14)
	Transmission Control Protocol, Src Port: 51917 (51917), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 410
	Hypertext Transfer Protocol
	    GET /assets/hip/us/hip_us_pearsonhighered/images/pearson_logo.gif HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /assets/hip/us/hip_us_pearsonhighered/images/pearson_logo.gif HTTP/1.1\r\n]
	            [GET /assets/hip/us/hip_us_pearsonhighered/images/pearson_logo.gif HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /assets/hip/us/hip_us_pearsonhighered/images/pearson_logo.gif
	        Request Version: HTTP/1.1
	    Host: www.pearsonhighered.com\r\n
	    Connection: keep-alive\r\n
	    Accept: */*\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    Accept-Language: en-us\r\n
	    Referer: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file4.html\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    \r\n
	    [Full request URI: http://www.pearsonhighered.com/assets/hip/us/hip_us_pearsonhighered/images/pearson_logo.gif]
	    [HTTP request 1/1]
	    [Response in frame: 465]

	No.     Time           Source                Destination           Protocol Length Info
	    461 10.215025000   155.246.171.95        128.119.240.90        HTTP     435    GET /~kurose/cover_5th_ed.jpg HTTP/1.1 

	Frame 461: 435 bytes on wire (3480 bits), 435 bytes captured (3480 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.240.90 (128.119.240.90)
	Transmission Control Protocol, Src Port: 51918 (51918), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 369
	Hypertext Transfer Protocol
	    GET /~kurose/cover_5th_ed.jpg HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /~kurose/cover_5th_ed.jpg HTTP/1.1\r\n]
	            [GET /~kurose/cover_5th_ed.jpg HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /~kurose/cover_5th_ed.jpg
	        Request Version: HTTP/1.1
	    Host: manic.cs.umass.edu\r\n
	    Connection: keep-alive\r\n
	    Accept: */*\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    Accept-Language: en-us\r\n
	    Referer: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file4.html\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    \r\n
	    [Full request URI: http://manic.cs.umass.edu/~kurose/cover_5th_ed.jpg]
	    [HTTP request 1/1]
	    [Response in frame: 470]

	No.     Time           Source                Destination           Protocol Length Info
	    465 10.221741000   165.193.140.14        155.246.171.95        HTTP     1022   HTTP/1.1 200 OK  (GIF89a)

	Frame 465: 1022 bytes on wire (8176 bits), 1022 bytes captured (8176 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 165.193.140.14 (165.193.140.14), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51917 (51917), Seq: 1587, Ack: 411, Len: 956
	[3 Reassembled TCP Segments (2542 bytes): #462(218), #463(1368), #465(956)]
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Fri, 20 Feb 2015 21:57:44 GMT\r\n
	    Server: Apache\r\n
	    Vary: Host\r\n
	    Last-Modified: Sat, 09 Jul 2011 13:17:52 GMT\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 2324\r\n
	    Connection: close\r\n
	    Content-Type: image/gif\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.020383000 seconds]
	    [Request in frame: 457]
	Compuserve GIF, Version: GIF89a

	No.     Time           Source                Destination           Protocol Length Info
	    470 10.349419000   128.119.240.90        155.246.171.95        HTTP     522    HTTP/1.1 302 Found  (text/html)

	Frame 470: 522 bytes on wire (4176 bits), 522 bytes captured (4176 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.240.90 (128.119.240.90), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51918 (51918), Seq: 1, Ack: 370, Len: 456
	Hypertext Transfer Protocol
	    HTTP/1.1 302 Found\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 302 Found\r\n]
	            [HTTP/1.1 302 Found\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 302
	        Response Phrase: Found
	    Date: Fri, 20 Feb 2015 21:57:44 GMT\r\n
	    Server: Apache\r\n
	    Location: http://caite.cs.umass.edu/~kurose/cover_5th_ed.jpg\r\n
	    Content-Length: 234\r\n
	    Connection: close\r\n
	    Content-Type: text/html; charset=iso-8859-1\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.134394000 seconds]
	    [Request in frame: 461]
	Line-based text data: text/html

	No.     Time           Source                Destination           Protocol Length Info
	    479 10.380488000   155.246.171.95        128.119.240.90        HTTP     435    GET /~kurose/cover_5th_ed.jpg HTTP/1.1 

	Frame 479: 435 bytes on wire (3480 bits), 435 bytes captured (3480 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.95 (155.246.171.95), Dst: 128.119.240.90 (128.119.240.90)
	Transmission Control Protocol, Src Port: 51919 (51919), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 369
	Hypertext Transfer Protocol
	    GET /~kurose/cover_5th_ed.jpg HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /~kurose/cover_5th_ed.jpg HTTP/1.1\r\n]
	            [GET /~kurose/cover_5th_ed.jpg HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /~kurose/cover_5th_ed.jpg
	        Request Version: HTTP/1.1
	    Host: caite.cs.umass.edu\r\n
	    Connection: keep-alive\r\n
	    Accept: */*\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/600.3.18 (KHTML, like Gecko) Version/8.0.3 Safari/600.3.18\r\n
	    Accept-Language: en-us\r\n
	    Referer: http://gaia.cs.umass.edu/wireshark-labs/HTTP-wireshark-file4.html\r\n
	    Accept-Encoding: gzip, deflate\r\n
	    \r\n
	    [Full request URI: http://caite.cs.umass.edu/~kurose/cover_5th_ed.jpg]
	    [HTTP request 1/1]
	    [Response in frame: 597]

	No.     Time           Source                Destination           Protocol Length Info
	    597 10.718339000   128.119.240.90        155.246.171.95        HTTP     976    HTTP/1.1 200 OK  (JPEG JFIF image)

	Frame 597: 976 bytes on wire (7808 bits), 976 bytes captured (7808 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.240.90 (128.119.240.90), Dst: 155.246.171.95 (155.246.171.95)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 51919 (51919), Seq: 100303, Ack: 370, Len: 910
	[74 Reassembled TCP Segments (101212 bytes): #481(1374), #482(1374), #483(1374), #484(1374), #485(1374), #486(1374), #487(1374), #488(1374), #489(1374), #490(1374), #500(1374), #501(1374), #504(1374), #505(1374), #506(1374), #507(1374), #50]
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Fri, 20 Feb 2015 21:57:44 GMT\r\n
	    Server: Apache\r\n
	    Last-Modified: Tue, 15 Sep 2009 18:23:27 GMT\r\n
	    ETag: "78004-18a68-473a1e0e6e5c0"\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 100968\r\n
	    Connection: close\r\n
	    Content-Type: image/jpeg\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.337851000 seconds]
	    [Request in frame: 479]
	JPEG File Interchange Format


1. 4

 128.119.245.12

 165.193.140.14

 128.119.240.90


2. They download the images parallel because when my broswer received the image address.It sends two request to the seperate web site in parallel and then get two respons from this two image address.


#### 5.HTTP Authentication


	No.     Time           Source                Destination           Protocol Length Info
	     91 3.422738000    155.246.171.27        128.119.245.12        HTTP     488    GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1 

	Frame 91: 488 bytes on wire (3904 bits), 488 bytes captured (3904 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.27 (155.246.171.27), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 52624 (52624), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 422
	Hypertext Transfer Protocol
	    GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/protected_pages/HTTP-wireshark-file5.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    Connection: keep-alive\r\n
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/40.0.2214.115 Safari/537.36\r\n
	    Accept-Encoding: gzip, deflate, sdch\r\n
	    Accept-Language: en,zh-CN;q=0.8,zh;q=0.6\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/protected_pages/HTTP-wireshark-file5.html]
	    [HTTP request 1/1]
	    [Response in frame: 100]

	No.     Time           Source                Destination           Protocol Length Info
	    100 3.457679000    128.119.245.12        155.246.171.27        HTTP     839    HTTP/1.1 401 Authorization Required  (text/html)

	Frame 100: 839 bytes on wire (6712 bits), 839 bytes captured (6712 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.27 (155.246.171.27)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 52624 (52624), Seq: 1, Ack: 423, Len: 773
	Hypertext Transfer Protocol
	    HTTP/1.1 401 Authorization Required\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 401 Authorization Required\r\n]
	            [HTTP/1.1 401 Authorization Required\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 401
	        Response Phrase: Authorization Required
	    Date: Sat, 21 Feb 2015 20:47:20 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    WWW-Authenticate: Basic realm="wireshark-students only"\r\n
	    Content-Length: 486\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    Connection: Keep-Alive\r\n
	    Content-Type: text/html; charset=iso-8859-1\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.034941000 seconds]
	    [Request in frame: 91]
	Line-based text data: text/html

	No.     Time           Source                Destination           Protocol Length Info
	    504 18.987241000   155.246.171.27        128.119.245.12        HTTP     547    GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1 

	Frame 504: 547 bytes on wire (4376 bits), 547 bytes captured (4376 bits) on interface 0
	Ethernet II, Src: Apple_9e:54:a4 (60:03:08:9e:54:a4), Dst: IETF-VRRP-VRID_10 (00:00:5e:00:01:10)
	Internet Protocol Version 4, Src: 155.246.171.27 (155.246.171.27), Dst: 128.119.245.12 (128.119.245.12)
	Transmission Control Protocol, Src Port: 52628 (52628), Dst Port: 80 (80), Seq: 1, Ack: 1, Len: 481
	Hypertext Transfer Protocol
	    GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1\r\n
	        [Expert Info (Chat/Sequence): GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1\r\n]
	            [GET /wireshark-labs/protected_pages/HTTP-wireshark-file5.html HTTP/1.1\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Method: GET
	        Request URI: /wireshark-labs/protected_pages/HTTP-wireshark-file5.html
	        Request Version: HTTP/1.1
	    Host: gaia.cs.umass.edu\r\n
	    Connection: keep-alive\r\n
	    Authorization: Basic d2lyZXNoYXJrLXN0dWRlbnRzOm5ldHdvcms=\r\n
	        Credentials: wireshark-students:network
	    Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8\r\n
	    User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/40.0.2214.115 Safari/537.36\r\n
	    Accept-Encoding: gzip, deflate, sdch\r\n
	    Accept-Language: en,zh-CN;q=0.8,zh;q=0.6\r\n
	    \r\n
	    [Full request URI: http://gaia.cs.umass.edu/wireshark-labs/protected_pages/HTTP-wireshark-file5.html]
	    [HTTP request 1/1]
	    [Response in frame: 507]

	No.     Time           Source                Destination           Protocol Length Info
	    507 19.019457000   128.119.245.12        155.246.171.27        HTTP     498    HTTP/1.1 200 OK  (text/html)

	Frame 507: 498 bytes on wire (3984 bits), 498 bytes captured (3984 bits) on interface 0
	Ethernet II, Src: JuniperN_fa:3f:f0 (dc:38:e1:fa:3f:f0), Dst: Apple_9e:54:a4 (60:03:08:9e:54:a4)
	Internet Protocol Version 4, Src: 128.119.245.12 (128.119.245.12), Dst: 155.246.171.27 (155.246.171.27)
	Transmission Control Protocol, Src Port: 80 (80), Dst Port: 52628 (52628), Seq: 1, Ack: 482, Len: 432
	Hypertext Transfer Protocol
	    HTTP/1.1 200 OK\r\n
	        [Expert Info (Chat/Sequence): HTTP/1.1 200 OK\r\n]
	            [HTTP/1.1 200 OK\r\n]
	            [Severity level: Chat]
	            [Group: Sequence]
	        Request Version: HTTP/1.1
	        Status Code: 200
	        Response Phrase: OK
	    Date: Sat, 21 Feb 2015 20:47:36 GMT\r\n
	    Server: Apache/2.2.3 (CentOS)\r\n
	    Last-Modified: Sat, 21 Feb 2015 20:47:01 GMT\r\n
	    ETag: "d6c9d-84-45557b40"\r\n
	    Accept-Ranges: bytes\r\n
	    Content-Length: 132\r\n
	    Keep-Alive: timeout=10, max=100\r\n
	    Connection: Keep-Alive\r\n
	    Content-Type: text/html; charset=UTF-8\r\n
	    \r\n
	    [HTTP response 1/1]
	    [Time since request: 0.032216000 seconds]
	    [Request in frame: 504]
	Line-based text data: text/html


1. 401 Authorization Required
2. Authorization