import pymongo

client=pymongo.MongoClient("mongodb://127.0.0.1:27017/")

db=client["py24db"]

try:
     rno=int(input("Enter the roll number :"))
     name=input("Enter the name :")
     per=float(input("Enter the Per :"))
     
     doc={"rno":rno,"name":name,"per":per}
     
     db.student.insert_one(doc)
     
     print("Data is added Successfully.!")

except Exception as e:
     print("Unable to save record")
    
client.close()
