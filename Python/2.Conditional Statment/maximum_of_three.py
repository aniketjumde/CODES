a=int(input("Enter the first number :"))
b=int(input("Enter the second number :"))
c=int(input("Enter the third number :"))

if a==b and b==c :
    print("All are equals !!!")
elif a>=b and c>=b :
    print("First value is greater !!!")
elif b>=c :
    print("Second value is greater !!!")
else :
    print("Third value is grater !!!")    
         