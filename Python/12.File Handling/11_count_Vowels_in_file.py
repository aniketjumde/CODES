Vowels=['a','e','i','o','u','A','E','I','O','U']
vcnt=0
f=open("a.txt","r")
while True:
    data=f.read(1)
    if data=="":
        break
    if data in Vowels:
        vcnt +=1
print("Number of Vowels :",vcnt)
f.close()