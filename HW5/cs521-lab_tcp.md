#cs521-lab tcp 
##lin liu 10397798

###p1:

192.168.1.102, port: 1161

###p2:

128.119.245.12 port: 80

###p3:

ip : 155.246.171.79  port : 54795

###p4:

0,Syn:set

###p5:

0,1,relative ack number,add 1 on the sequence number of SYN segment,Acknowledgment: Set,Syn: Set

###p6:

1

###p7:

First 6 segements number is 4,5,7,8,10,11

segment|sequence number|sent time|ack received|RTT
-------|---------------|---------|------------|---
1      |1|0.026477|0.053937|0.02746
2|566|0.041737|0.077294|0.035557
3|2026|0.054026|0.124085|0.070059
4|3486|0.054690|0.169118|0.11443
5|4946|0.077405|0.217299|0.13989
6|6406|0.078157|0.267802|0.18964

1:EstimatedRTT=0.02746

2:EstimatedRTT=0.0285

3:EstimatedRTT=0.0337

4:EstimatedRTT=0.0438

5:EstimatedRTT=0.0558

6:EstimatedRTT=0.0725

###p8

the first is 565 bytes,the rest is 1460 bytes

###p9

minimum amount of available buffer space is 5840 bytes.Sender has not been throttled because of the lack of receiver buffer space.

###p10

no,I can detect the sequence numbers of sender.The sequence numbers is always increased through the Time- Sequence-Graph (Stevens)

###p11

1460 bytes,

###p12

the data size is 164090 because the last sequence number is 164091,so the size is 164091-1=164090 bytes.The last ack is 202.the first is 4.so the time is 5.455830-0.026477=5.429353 sec.

The throught is 164090/5.429353=30222 byte/sec

###p13

the slow begin stars at the begin of the connection and end when the trasfer is stable every six times.

the congestion avoidance take over when the stable transfer begin every six times.

