#Accept three number check whethre Given numbr is between first or nota=int(input("Enter the first number :"))
a=int(input("Enter the first number :"))
b=int(input("Enter the Second number :"))
c=int(input("Enter the Third number :"))

if a==b==c :
    print("All number are equals...!")
elif b<a and  c>a :
    print("First number is between second and third") 
elif a<b and  c>b :
    print("Second number is Between First and Third")
elif c<a and  b>c :
    print("Third number is Between First and Second")                
else :
    print("..")