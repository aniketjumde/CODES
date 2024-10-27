def div(a,b):
    try:    
        ans=a/b
        return ans
    finally:
        print("I am in finally")
        
        
#Main Script
print("HI")
try:
    num1=int(input("Enter the numarator :"))
    num2=int(input("Enter the Denomenator :"))
    ans=div(num1,num2)
    print("Divistion is :",ans)
except Exception as e :
    print("Problem : During Execution -",e)
print("Byee")