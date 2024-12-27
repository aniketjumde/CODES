import pymongo

a=pymongo.MongoClient("mongodb://127.0.0.1:27017/")

db=a["py24db"]

db.student.update_one({"rno":101},{"$set": {"per":100}})
print("Document updated Succesfully.!")

a.close()
