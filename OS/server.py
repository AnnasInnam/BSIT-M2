#importing socket libarary
import socket
#creating a socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((socket.gethostname(), 1234))
#reserved 1234 local port
s.listen(5)
#5 means 5 connection kept on waiting if server is busy

while True:
    # now our endpoint knows about the OTHER endpoint.
    clientsocket, address = s.accept()
    print(f"Connection from {address} has been established.")
