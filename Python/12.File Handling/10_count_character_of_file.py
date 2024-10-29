f=open("a.txt","r")
cnt=0
while True:
    data=f.read(1)
    
    if data=="":
        break
    cnt=cnt+1
print("No.of.Character in File :",cnt)
f.close()