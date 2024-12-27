import pymongo

print("RNO\tNAME\tPER")
print("--------------------------------------")
def display(L):
    for data in L:
        for v in data.values():
            print(v,end="\t")
        print()

a=pymongo.MongoClient("mongodb://127.0.0.1:27017/")

db=a["py24db"]

r=db.student.find({},{"_id":0})
display(r)

a.close()
