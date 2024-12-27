import pymongo

a=pymongo.MongoClient("mongodb://127.0.0.1:27017/")

db=a["py24db"]

db.student.delete_one({"rno":101})
print("Document deleted Succesfully.!")

a.close()
