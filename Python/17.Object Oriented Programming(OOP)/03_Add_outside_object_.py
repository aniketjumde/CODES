class Student:
    
    def __init__(self,rno,name,per): #Constructor
        self.rno=rno                #self is parameter is store the refrence of object
        self.name=name
        self.per=per

    def display(self):
        print("Roll Number :",self.rno)
        print("Name        :",self.name)
        print("Percentage  :",self.per)
        print("City        :",self.city)
        print("-------------------------------------")

ob1=Student(101,"Aniket",89)
ob1.city="Buldhana"
ob1.display()

ob2=Student(102,"Pradeep",69)
ob2.city="Beed"
ob2.display()

#Error occur when the obhject 3 is not given City NAme 
'''
ob3=Student(102,"Pradeep",69)
ob3.display()
'''