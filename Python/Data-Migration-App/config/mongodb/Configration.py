
import pymongo

#Mongodb Property

MONGO_HOST_URL="mongodb://127.0.0.1:27017/"
MONGO_DB_NAME="py24db"
MONGO_CLIENT_OB=None
MONGO_DB_OB=None

def get_Mongodb_connection():
    global MONGO_CLIENT_OB
    global MONGO_DB_OB

    if MONGO_CLIENT_OB is None:
        MONGO_CLIENT_OB=pymongo.MongoClient(MONGO_HOST_URL)
        MONGO_DB_OB=MONGO_CLIENT_OB[MONGO_DB_NAME]
        print("Mongodb is Connected.!!!")
        return MONGO_CLIENT_OB

def close_Mongodb_connection():
    global MONGO_CLIENT_OB
    global MONGO_DB_OB
    if MONGO_CLIENT_OB is not None:
        MONGO_CLIENT_OB.close()
        MONGO_DB_OB=None
        MONGO_DB_OB=None
        print("Mongodb is Dis-Connected.!!!")

def get_collection(cname):
    if MONGO_DB_OB is not None:
        return MONGO_DB_OB[cname]
