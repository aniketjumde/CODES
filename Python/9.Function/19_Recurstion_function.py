def factorail(n):
    if n==0 or n==1:
        return 1
    else :
        return n*factorail(n-1)
    
n=int(input("Enter the number :"))
ans=factorail(n)
print("Factorial is :",ans)