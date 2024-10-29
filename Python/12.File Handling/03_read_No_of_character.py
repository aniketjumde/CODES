f=open("a.txt","r")

data=f.read(8) #read word by first index
print(data)
data=f.read(2)#read word  by second index
print(data)

f.close()