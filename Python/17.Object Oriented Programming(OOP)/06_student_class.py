class Student:
    cnt=0       
    
    def __init__(self,rno,name,per):
        self.rno=rno
        self.name=name
        self.per=per
        Student.cnt=Student.cnt +1
        
    def display(self):
        print(f"{self.rno} {self.name} {self.per}")
        
    @classmethod
    def show(cls):
        print("No.of.Object created :",Student.cnt)
        
ob1=Student(101,"AAA",99)
ob2=Student(102,"BBB",88)
print("RNO NAME PER")
ob1.display()
ob2.display()
Student.show()
Student.cnt=55 #by default class membor is not private this will be change
Student.show()

    