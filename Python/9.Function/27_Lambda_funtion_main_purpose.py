#The main purpose of lambda function is when we want to pass function as argument to another function

def display(a,b,my_max):
    print("Maximum is :",my_max(a,b))
    
display(12,34,lambda x,y:x if x>y else y)