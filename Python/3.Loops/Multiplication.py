lb=int(input("Enter the lower limit :"))
ub=int(input("Enter the upper limit :"))
print(f'Multiplication between {lb} to {ub}')
Mul=1
if lb<=ub:   
    for x in range(lb,ub+1):
        Mul= Mul * x
    print(Mul)
else :
    print("Invalid number.......!")