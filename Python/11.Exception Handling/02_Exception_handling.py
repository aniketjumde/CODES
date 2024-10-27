try:
    num1=int(input("Enter the numarator :"))
    num2=int(input("Enter the Denomenator :"))
    ans=num1/num2  
except ZeroDivisionError:
    print("Hello User ,Denomenator can Not be Zero,So your fisrt num1 is Your Divistion ")
    ans=num1   
except ValueError :
    print("Numbers can be digit or value : Not allow to string and special chracter")
    ans=0
except : 
    print("Unknown error")
    ans=0
    
print("Divistion is : ",ans)