from socket import *
serverName='localhost'
serverPort=12000
clientSocket=socket(AF_INET,SOCK_DGRAM)
clientSocket.bind(('', 5432))
message=raw_input('input lowercase sentence:')
clientSocket.sendto(message,(serverName,serverPort))
modifiedMessage,serverAddress=clientSocket.recvfrom(2048)
print modifiedMessage
clientSocket.close()
