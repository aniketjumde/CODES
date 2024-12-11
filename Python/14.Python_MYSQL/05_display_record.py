import mysql.connector

con=mysql.connector.connect(host="localhost",port="3306",username="root",password="root",database="pysql")

c=con.cursor()

c.execute("SELECT * FROM student")
L=c.fetchall() #[(101,AAA,80),(102,BBB,78),(103,CCC,90)]

print("RNO\tNAME\tPER")
for rec in L:
    print(rec[0],"\t",rec[1],"\t",rec[2])
    
con.close()