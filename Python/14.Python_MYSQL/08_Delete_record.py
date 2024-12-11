import mysql.connector

con=mysql.connector.connect(host="localhost",port="3306",user="root",password="root",database="pysql")

c=con.cursor()
rno=int(input("Enter the Roll NUMBER :"))

c.execute(f"DELETE FROM student WHERE rno={rno}")

con.commit()
con.close()

print("Record is Deleted Succcessfully.")