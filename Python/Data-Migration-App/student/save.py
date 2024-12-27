import csv

from config.mongodb import get_Mongodb_connection
from config.mongodb.Configration import get_collection
from config.mysqldb import get_sqldb_connection

'''
    this method save student information in csv file
    Filepath is give in csv configartion file
'''


def save_to_csv(filepath,list_to_list):
    fw=open(filepath,"w",newline='')
    cw=csv.writer(fw)
    header=['RNO','NAME','PER']

    cw.writerow(header)

    for record in list_to_list:
        cw.writerow(record)
    fw.close()
    print("Data is Save Successfully..!!")



def save_to_sqldb(tablename,L):
    con=get_sqldb_connection()
    c=con.cursor()
    for record in L:
        try:
                c.execute(f"INSERT INTO {tablename} VALUES({record[0]},'{record[1]}',{record[2]})")
        except:
                print("Rejected Record ",record)
    con.commit()
    print("All Information is Saved in Table :",tablename)


def save_to_mongodb(cname,L):
    collection=get_collection(cname)  #collection---> db.student

    for record in L:
        d={'rno': record[0],'name': record[1],'per': record[2]}
        collection.insert_one(d)
    print("Information saved in collection")