class Student:
    __cnt=0   #Class mhdhe privated variable createed as 
    
    def __init__(self,rno,name,per):
        self.rno=rno
        self.name=name
        self.per=per
        Student.__cnt=Student.__cnt +1
        Student.grade=Student.get_grade(per)
        
    def display(self):
        print(f"{self.rno} {self.name} {self.per} {Student.grade}")
        
    @classmethod
    def show(cls):
        print("No.of.Object created :",Student.__cnt)
    
    @staticmethod
    def get_grade(per):
        if per>70:
            print("Distintion")
        elif per < 60:
            print("First class")
        elif per < 40:
            print("Fail")
        
       
ob1=Student(101,"AAA",67)
ob2=Student(102,"BBB",35)
print("RNO NAME PER GRADE")
ob1.display()
ob2.display()
Student.show()


    