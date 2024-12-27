class Student:
    def __init__(self,rno,name,per):
        self.rno=rno            # <------------ instance Variable
        self.name=name
        self.per=per
        
    def display(self):  # <------------ instance Method
        print("Roll Number :",self.rno)
        print("Name        :",self.name)
        print("Percentage  :",self.per)
        
        self.show()    # <------------ instance Method
        
        print("-------------------------------------")
    
    def show(self):
        print("I am in Show")
        
ob1=Student(101,"Aniket",89)
ob1.display()

ob2=Student(102,"Pradeep",69)
ob2.display()