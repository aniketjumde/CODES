#When Gloabl and local variables names are same then inside
# the function local variable is accessable and global variable then you to make use of global()

a=10

def fun():
    a=20
    print("Loacal variable value :",a)
    print("Global variable value :",globals()['a'])

fun()

print("How to seen Global variable list :")
print(globals())