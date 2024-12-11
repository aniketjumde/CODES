import mysql.connector

con= mysql.connector.connect(host="localhost",port="3306",user="root",password="root")

c=con.cursor()

database_name=input("Enter the database name :")

c.execute("CREATE DATABASE "+database_name)

con.commit()
con.close()

print(database_name,"is Created Successfully.!")