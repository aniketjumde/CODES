from fileinput import filename

from student.load import load_from_csv, load_from_sqldb, load_from_Mongodb, load_from_user
from student.save import save_to_sqldb, save_to_mongodb, save_to_csv


def csv_to_sqldb(filepath,tablename):
    L=load_from_csv(filepath)
    save_to_sqldb(tablename,L)
    print(f"Migration from csv file: {filepath} to table :{tablename} is Successfully.!!!")

def csv_to_mongodb(filepath,collection_name):
    L=load_from_csv(filepath)
    save_to_mongodb(collection_name,L)
    print(f"Migration from csv file: {filepath} to collection :{collection_name} is Successfully.!!!")

def sqldb_to_csv(tablename,filepath):
    L = load_from_sqldb(tablename)
    save_to_csv(filepath, L)
    print(f"Migration from sqldb table :{tablename} to csv file: {filepath} is Successfully.!!!")

def sqldb_to_mongodb(tablename,collection_name):
    L=load_from_sqldb(tablename)
    save_to_mongodb(collection_name,L)
    print(f"Migration from sqldb table :{tablename} to collection :{collection_name} is Successfully.!!!")

def mongodb_to_csv(collection_name,filepath):
    L=load_from_Mongodb(collection_name)
    save_to_csv(filepath,L)
    print(f"Migration from mongodb collection :{collection_name} to csv file: {filepath} is Successfully.!!!")

def mongodb_to_sqldb(collection_name,tablename):
    L=load_from_Mongodb(collection_name)
    save_to_sqldb(tablename,L)
    print(f"Migration from mongodb collection :{collection_name} to sqldb table :{tablename} is Successfully.!!!")

def user_input_to_csv(n,filepath):
    L=load_from_user(n)
    save_to_csv(filepath,L)
    print(f"Data is Successfully saved to csv file: {filepath} !!")

def user_input_to_sqldb(n,tablename):
    l=load_from_user(n)
    save_to_sqldb(tablename,l)
    print(f"Data is Successfully saved to sqldb table :{tablename} !!")

def user_input_to_mongodb(n,collection_name):
    l=load_from_user(n)
    save_to_mongodb(collection_name,l)
    print(f"Data is Successfully saved to mongodb collection :{collection_name} !!")