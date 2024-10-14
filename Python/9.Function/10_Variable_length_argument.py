#Tuple 
#Variable length arguments by passing 'n' number of arguments values then all the argument will be
# stored in Tuple

def add(*a):
    print(type(a))
    result=0
    for i in a:
        result +=i
    print("Sum :",result)

add(10,20,45)