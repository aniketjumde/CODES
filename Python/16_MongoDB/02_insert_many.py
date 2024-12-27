import pymongo

client=pymongo.MongoClient("mongodb://127.0.0.1:27017/")

db=client["py24db"]

d1={"rno":101,"name":"AAA","per":65}
d2={"rno":102,"name":"BBB","per":77}
d3={"rno":103,"name":"CCC","per":92}
d4={"rno":104,"name":"DDD","per":82}

doc=[d1,d2,d3,d4]

db.student.insert_many(doc)

print("Data is added Succesfully!.")

client.close()