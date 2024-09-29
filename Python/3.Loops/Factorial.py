n=int(input("Enter the calue of nth : "))
print(f'Factorial of {n} is :')
fact=1
if n>0:
    for i in range(1,n+1):
        fact=fact *i
    print(fact)
else :
    print("Invalid Option :Number should be Positive..!")