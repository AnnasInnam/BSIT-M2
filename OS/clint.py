#importing socket libarary
import socket
#creating a socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((socket.gethostname(), 1234))
#connect to the local port 1234
msg = s.recv(1024)
print(msg.decode("utf-8"))
