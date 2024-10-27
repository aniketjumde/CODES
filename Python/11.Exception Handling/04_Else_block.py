try:
    num1=int(input("Enter the numarator :"))
    num2=int(input("Enter the Denomenator :"))
    ans=num1/num2   
except ZeroDivisionError:
    print("Problem : Denominator can not be ZERO") 
except ValueError :
    print("Problem : Inuput is Not a Number") 
except : 
    print("Problem :Unknown error")
else:   #Try block are execute successfully then else block are execute
    print("Divistion is : ",ans)