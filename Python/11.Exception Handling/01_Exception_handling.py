try:
    num1=int(input("Enter the numarator :"))
    num2=int(input("Enter the Denomenator :"))
    ans=num1/num2
    print("Divistion is : ",ans)    
except ZeroDivisionError:
    print("Hello User ,Denomenator can Not be Zero,So your fisrt num1 is Your Divistion ")    
except ValueError :
    print("Numbers can be digit or value : Not allow to string and special chracter")
except : 
    print("Unknown error")