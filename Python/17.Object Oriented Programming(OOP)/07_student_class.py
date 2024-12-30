class Student:
    __cnt=0   #Class mhdhe privated variable createed as 
    
    def __init__(self,rno,name,per):
        self.rno=rno
        self.name=name
        self.per=per
        Student.__cnt=Student.__cnt +1
        
    def display(self):
        print(f"{self.rno} {self.name} {self.per}")
        
    @classmethod
    def show(cls):
        print("No.of.Object created :",Student.__cnt)
        
ob1=Student(101,"AAA",99)
ob2=Student(102,"BBB",88)
print("RNO NAME PER")
ob1.display()
ob2.display()
Student.show()
Student.__cnt=55
Student.show()

    