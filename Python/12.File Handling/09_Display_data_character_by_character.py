f=open("a.txt","r")

while True:
    data=f.read(1)
    
    if data=="":
        break
    print(data)
    
f.close()