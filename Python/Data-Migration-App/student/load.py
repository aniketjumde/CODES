import csv

from config.mongodb.Configration import get_collection
from config.mysqldb import get_sqldb_connection
from myio.myinput import get_rno, get_name, get_percentage


def load_from_csv(filepath):
    fr=open(filepath,"r")
    reader=csv.reader(fr)#list method read from reader object which is pointing to student.csv and return list of list
    L=list(reader)
    del L[0]  #here I am deleting headder file
    fr.close()
    return L

#Preparing List of List student records from user
def load_from_user(n):
    L = []
    for i in range(n):
        rno = get_rno()
        name = get_name()
        per = get_percentage()
        TL = [rno, name, per]
        L.append(TL)

    return L
print("a")

def load_from_sqldb(tablename):
    con=get_sqldb_connection()
    c=con.cursor()

    c.execute(f"SELECT * FROM {tablename}")

    return [list(L) for L in c.fetchall()]

def load_from_Mongodb(cname):
    collection=get_collection(cname)
    L=[]

    result=collection.find({},{'_id':0})

    for d in result :
        TL=[d['rno'],d['name'],d['per']]
        L.append(TL)
    return  L