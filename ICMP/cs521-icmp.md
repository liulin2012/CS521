#CS521-ICMP
##lin liu 10397798

###P1
There are no match for the network or subnet IP address with the interface to the destination IP address of the ICMP message.


###P2
no,it need to use Icsetsrc to iterate each network interface.If the interface match,it fill the source field.

###p3
Icmp_in locates the ICMP message in the datagram, and uses the ICMP type field to select the message type.If it is ICMP time exceeded message,icmp_in will not handle it ,it only accumulates a count of incoming messages,and the SNMP will uses these counts.

###p4
Icmp_in locates the ICMP message in the datagram, and uses the ICMP type field to select the message type.If it is source quench message,icmp_in will not handle it ,it only accumulates a count of incoming messages,and the SNMP will uses these counts.

###p5
