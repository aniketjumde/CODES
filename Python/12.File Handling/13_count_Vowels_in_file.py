Vowels=['a','e','i','o','u','A','E','I','O','U']
f=open("a.txt","r")
vcnt=0
whole_file=f.read()
for ch in whole_file:
    if ch in Vowels:
        vcnt=vcnt+1
        
print("No.of.Vowels :",vcnt)