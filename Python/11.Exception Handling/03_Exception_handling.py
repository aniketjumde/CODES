try:
    num1=int(input("Enter the numarator :"))
    num2=int(input("Enter the Denomenator :"))
    ans=num1/num2   
except ZeroDivisionError:
   ans=num1   
except ValueError :
   ans=0
except : 
    print("Unknown error")
    ans=0
    
print("Divistion is : ",ans)