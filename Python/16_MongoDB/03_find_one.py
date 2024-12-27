import pymongo

a=pymongo.MongoClient("mongodb://127.0.0.1:27017/")

db=a["py24db"]

r=db.student.find_one({},{"_id":0})
print(r)

a.close()
