n=int(input("Enter the value of n : "))

for i in range(2,n):
    if n%i==0:
        print(f'{n} is not prime number...!')
        break
else:
    print("Prime number is :",n)