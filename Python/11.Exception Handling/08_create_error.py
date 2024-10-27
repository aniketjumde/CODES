num=int(input("Enter the number :"))
assert num >=0 , "Number Should not be Negative !!"
ans=1
for i in range(1,num+1):
    ans *=i
print("Factorial is :",ans)