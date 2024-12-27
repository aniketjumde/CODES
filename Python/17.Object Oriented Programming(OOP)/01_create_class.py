class Student:
    
    def __init__(self,rno,name,per): #Constructor
        self.rno=rno                #self is parameter is store the refrence of object
        self.name=name
        self.per=per

    def display(self):
        print("Roll Number :",self.rno)
        print("Name        :",self.name)
        print("Percentage  :",self.per)
        print("-------------------------------------")

ob1=Student(101,"Aniket",89)
ob1.display()

ob2=Student(102,"Pradeep",69)
ob2.display()