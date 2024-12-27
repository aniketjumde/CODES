#from config.mongodb import get_Mongodb_connection
#from config.mongodb.Configration import close_Mongodb_connection
import student
from config.csvconf.Configration import FILENAME
from migration.migrate import csv_to_sqldb, csv_to_mongodb, sqldb_to_csv, sqldb_to_mongodb, mongodb_to_csv, \
    mongodb_to_sqldb, user_input_to_csv, user_input_to_sqldb
from student.load import load_from_Mongodb
from student.save import save_to_mongodb, save_to_csv, save_to_sqldb

print("Welocome  to Data-Migration-App")

while True:
    print("1.csv_to_mongodb.")
    print("2.csv_to_sqldb.")
    print("3.Exit")

    choice=int(input("Enter your choice:"))

    if choice==1:
                filename=input("Enter the filename:")
                cname=input("Enter the collection name:")
                csv_to_mongodb(filename,cname)
                filepath="resources/"+filename
                break
    if choice==2:
                filename=input("Enter the filename:")
                tablename=input("Enter the table name:")
                csv_to_sqldb(filename,tablename)
                filepath="resources/"+filename+".csv"
                break
    if choice==3:
                exit()







#MIGRATION Test Case : CSV to SQLDB,MONGODB
#csv_to_sqldb(FILENAME,"student")
#csv_to_mongodb(FILENAME,"student")
#___________________________________________________________________________________________


#MIGRA#TION Test Case : SQLDB to CSV,MONGODB
#sqldb_to_csv(FILENAME,"student")
#sqldb_to_mongodb(FILENAME,"student")
#___________________________________________________________________________________________

#MIGRA#TION Test Case : MONGODB to CSV,SQLDB
#mongodb_to_csv(FILENAME,"student")
#mongodb_to_sqldb(FILENAME,"student" )


''' 
#Test code of display_student inofrmation
L=[101,"AAA",89],[102,"BBB",67],[103,"CCC",85]
display_student_information(L)

#Test code of save to csv
L=[101,"AAA",89],[102,"BBB",67],[103,"CCC",85]
save_to_csv(FILENAME,L)

#Test code of load to csv
L=load_from_csv(FILENAME)
display_student_information(L)

#Test code of Rno , Name , Per
while True:
    try:
        rno = int(input("Enter the Roll Number: "))
        if rno < 1:
            raise InvalidRollNumberError("InvalidRollNumberError: Negative number not allowed")
    except InvalidRollNumberError as re:
        print(re)
    except ValueError as ve:
        print("Given number is not an integer:", ve)
    except :
        print("Unknown error!")
    else:
        # If no exception occurs, exit the loop
        break

while True:
    try:
        name=input("Enter the name :")
        if not name.isalpha():
            raise InvalidNameError("InvalidNameError:Give character is Not a string")
    except InvalidNameError as en:
        print(en)
    except ValueError as ve:
        print("Given number is not an integer:", ve)
    except :
        print("Unknown error .!!!")
    else :
            break

while True:
    try:
        per = int(input("Enter the percentage: "))
        if per<1 or per>100 :
            raise InvalidPercentageError("InvalidPercentageError: percentage between 0 to 100")
    except InvalidPercentageError as ne:
        print(ne)
    except ValueError as ve:
        print("Given number is not an percentage:", ve)
    except :
        print("Unknown error!")
    else:
        # If no exception occurs, exit the loop
        break
n=3
L=load_from_user(n)
display_student_information(L)


L=load_from_sqldb("student")
display_student_information(L)

#MIGRATION Test Case : CSV to SQLDB,MONGODB
#csv_to_sqldb(FILENAME,"student")
#csv_to_mongodb(FILENAME,"student")
#___________________________________________________________________________________________


#MIGRA#TION Test Case : SQLDB to CSV,MONGODB
#sqldb_to_csv(FILENAME,"student")
#sqldb_to_mongodb(FILENAME,"student")
#___________________________________________________________________________________________

#MIGRA#TION Test Case : MONGODB to CSV,SQLDB
#mongodb_to_csv(FILENAME,"student")
#mongodb_to_sqldb(FILENAME,"student" )


Migration Test Case : User Input to CSV,SQLDB,MONGODB
#n=int(input("How many student record you want to load:"))
#user_input_to_csv(n,FILENAME)
#user_input_to_sqldb(n,"student")
#user_input_to_mongodb(n,"student")
'''



