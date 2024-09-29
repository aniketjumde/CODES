#Write a program which accept lower limit and upper limit display all numbers between them
lower=int(input("Enter the lower limit :"))
upper=int(input("Enter the upper limit :"))
print(f'Number between {lower} and {upper} :')
if lower<=upper:   
    for x in range(lower,upper+1):
        print(x)
else :
    print("Invalid number.......!")
