def check():
    if __name__=='__main__':
        print("Module(name.py) execute as a program")
    else:
        print("Module(name.py) execute as a module from some other program")
 
check()   
print("I am executing as : ",__name__)    