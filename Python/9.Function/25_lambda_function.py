#Lambda function Internally return expression value and we are not required to writen any value

def add(a,b):
    print("Add :",a+b)  #Normal function
add(10,28)

add=lambda a,b:a+b
print("Add :",add(10,25))   #Lambda function