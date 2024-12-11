import mysql.connector

con=mysql.connector.connect(host="localhost",port="3306",user="root",password="root",database="pysql")

c=con.cursor()

rno=int(input("Enter the Roll Number :"))
name=input("Enter the Name :")
per=float(input("Enter the Percentage :"))

c.execute(f"INSERT INTO student VALUES({rno},'{name}',{per})")

con.commit()
con.close()

print("Record is inserted Succesfully.!")
