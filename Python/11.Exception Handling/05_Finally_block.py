try:
    num1=int(input("Enter the numarator :"))
    num2=int(input("Enter the Denomenator :"))
    ans=num1/num2   
except ZeroDivisionError:
    print("Problem : Denominator can not be ZERO")
    ans=num1   
except ValueError :
    print("Problem : Inuput is Not a Number") 
    ans=0
except : 
    print("Unknown error")
    ans=0    
finally:
    print("Divistion is :",ans)