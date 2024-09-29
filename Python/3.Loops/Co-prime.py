""" Find they are co-prime each other
ex 21:3 7 21
   35:5 7 35  
   the 7 is same divisor of both tahn that is not co-prime 
   
ex 8: 2 4 8
   9: 3 9
   they are co-prime
 """
n1=int(input("Enter the first number :"))
n2=int(input("Enter the second number :"))

if n1<n2:
    limit=n1
else :
    limit=n2
    
flag=True   

for i in range(2,limit+1):
    if n1%i==0 and n2%i==0:
        flag=False
        break

if flag==True:
    print(f'{n1} and {n2} are co-prime number..!')
else:
    print(f'{n1} and {n2} are not co-prime number..!')
