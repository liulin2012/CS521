#4

##p4

p1. Supposethatthelinksandroutersinthenetworkneverfailandthatrout- ing paths used between all source/destination pairs remains constant. In this scenario, does a VC or datagram architecture have more control traf- fic overhead? Why?

answer :the datagram architecture have more control traffic overhead because it need to route through the network.The VC network will not change if it has been setted up.


P32. Consider the count-to-infinity problem in the distance vector routing. Will the count-to-infinity problem occur if we decrease the cost of a link? Why? How about if we connect two nodes which do not have a link?

no,it will not casue a loop
no.


P33. Argue that for the distance-vector algorithm in Figure 4.30, each value in the distance vector D(x) is non-increasing and will eventually stabilize in a finite number of steps.

answer: In each step,it follow by the Bellman-Ford algorithm.It will decrease the values in the table.If no updating in the table ,there are no message send out to another router.So if it is non-increasing it will be in a finite number of steps


#6

Because if one wireless station has a large frames to transit.it will control the channel all the time if it begin the step 1 after it successfully transmit the frame.
But if it begin the step 2 after transmitiing a frame then it will choose a randon backoff, so it is fair to other wireless station to use the channel.so the fairness is the rationale.

the frame without the data is 32 bytes long.so the control frame is 32*8bits / 11Mbps = 23uses.The data frame time is (8000+256)bits/11Mbps = 751 usec
so total time is DIFS+RTS+SIFS+CTS+SIFS+DATA+SIFS+ACK = DIFS + 3SIFS + 820 usec

yes.Althought coa is same ,their permanent address is not same.So when the foreign agent receive the datagram ,it will decapsulate the datagram and determine the address of mobile .so seperate address will be used to send the data to the seperate destinations in the network.

The MSRN will be updated in the HLR when the MSRN changes.Each handoff requires the MSRN change,so the change is so frequent.
The advantage is the MSRN will be privided quickly if the MSRN is in the HLR.it will not need to query the VLR.


#7

Yes, Alice only needs one socket. Bob and Claire will choose different SSRC’s, so Alice will be able distinguish between the two streams.


true:
When using RTP,it is possible for a sendertochangeencodinginthemid- dle of a session.
In differentiated services,while per-hop behavior defines differencesin performance among classes, it does not mandate any particular mecha- nism for achieving these performances.
SIP messages are typically sent between SIPentitiesusingadefaultSIP port number.
In order to maintain registration, SIP clients must periodically send REGISTER messages.


false:
All applications that use RTP must use port 87.
If an RTP session has a separate audioandvideostreamforeachsender, then the audio and video streams use the same SSRC.
Suppose Alice wants to establish an SIP session with Bob. In her INVITE message she includes the line: m=audio 48753 RTP/AVP 3 (AVP 3 denotes GSM audio). Alice has therefore indicated in this message that she wishes to send GSM audio.
Referring to the preceding statement, AlicehasindicatedinherINVITE message that she will send audio to port 48753.
SIP mandates that all SIP clients support G.711 audio encoding.
