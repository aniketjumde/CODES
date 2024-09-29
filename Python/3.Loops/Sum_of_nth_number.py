lb=int(input("Enter the lower limit :"))
ub=int(input("Enter the upper limit :"))
print(f'Sum of {lb} to {ub} :')
sum=0
if lb<=ub:   
    for x in range(lb,ub+1):
        sum = sum + x
    print(sum)
else :
    print("Invalid number.......!")