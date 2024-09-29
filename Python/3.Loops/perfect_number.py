n=int(input("Enter the number :"))
if n<=0:
    print("Invalid input..!!")
    exit()
ans=0
tnum=n
for i in range(1,n):
    if n%i==0:
        ans=ans+i
if tnum==ans:
    print(f"Given number {tnum} is perfect number")
else:
    print(f"Given number  {tnum} is not perfect number")

    