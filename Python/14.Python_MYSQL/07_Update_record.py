import mysql.connector

con=mysql.connector.connect(host="localhost",port="3306",user="root",password="root",database="pysql")

rno=int(input("Enter the Roll NUMBER :"))
per=float(input("Enter the Percentage :"))

c=con.cursor()

c.execute(f"UPDATE student SET per={per} WHERE rno={rno}")

con.commit()
con.close()

print("Record is updates Succcessfully.")