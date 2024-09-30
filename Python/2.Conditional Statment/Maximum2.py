#Find Maximum of three number
a=int(input("Enter the first number :"))
b=int(input("Enter the Second number :"))
c=int(input("Enter the Third number :"))

if a==b==c:
    print("All numbers are equal..!")
    exit(0)

if a>b and a>c :
    print("First number is Greater..!")
elif b>c :
    print("Second number is Greater...!")
else :
    print("Third number is Greatert...!")            
        