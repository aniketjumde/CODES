n=int(input("Enter the number :"))
if n<=0:
    print("Invalid Option..!!")
    exit()
f1=0
f2=1
print("Fibonnicies Series : ",end="")
print(0,end=" ")
for i in range(2,n+1):
    f3=f1+f2
    f1=f2
    f2=f3
    print(f3,end=" ")