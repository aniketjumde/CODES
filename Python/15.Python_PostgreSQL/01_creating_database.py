import psycopg2

con=psycopg2.connect(host="localhost",port=5432,user="postgres",password="root")

c=con.cursor()

dname=input("Enter the database name :")

c.execute("CREATE DATABASE "+ dname)

con.commit()
c.close()
con.close()

print(dname,"is created successfully")