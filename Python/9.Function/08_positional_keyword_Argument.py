#yes we can provide both positional and keyword argument but first have to provide positional
# argument and keyword argument Otherwise We Provide SYNTAXERROR

def add(a,b,c):
    print("Add :",a+b+c)
    
add(2,b=3,c=4)
#add(a=2,3,5)  Provide a Syntax Error
