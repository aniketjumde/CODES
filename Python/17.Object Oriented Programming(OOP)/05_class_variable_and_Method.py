class A:
    i=11   #class variable memory is allocated at one time 
    
    def display(self):
        i=55
        print("Class Variable    :",A.i)
        print("Instance Variable :",i)
        
    @classmethod
    def show(cls):
        print("Value of Class Variab :",cls.i)
    
ob1=A()
ob1.display()
A.show()