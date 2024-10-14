#Tuple 
#Variable length arguments by passing 'n' number of arguments values then all the argument will be
# stored in Tuple

def add(*a,b=10,c=30):
    print(a,b,c)

add(10,20)