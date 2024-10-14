a=10
b=20    # if we define any variable in Outside the function is called Global variable
print("a :",a)
print("b :",b)

def add():
    print("Add :",a+b)
    
def sub():
    print("sub :",a-b)
        
def mul():
    print("Mul :",a*b)

add()
sub()
mul()