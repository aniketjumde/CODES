import mysql.connector

con=mysql.connector.connect(host="localhost",port="3306",user="root",password="root",database="pysql")

c=con.cursor()

c.execute("create table student(rno int primary key,name varchar(10),per float)")
    
con.commit()
c.close()
con.close()

print("student table is inserted Successfuly")
