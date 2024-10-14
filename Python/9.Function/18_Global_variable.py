a=10
print("Global Variable :")
print(globals())
print(type(globals()))
print()

def fun(a):
    c=20
    print("Local Variable :")
    print(locals())
    print(globals()['a'])
    globals()['a']=100
    print()
    
fun(20)
print("Main a :",a)