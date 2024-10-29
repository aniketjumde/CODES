# readline() is read only one Line
print("Function readline():")
print()
file_object=open("a.txt","r")
file_data=file_object.readline()
print(file_data)
file_object.close()

# readlines() is read data for  multiple lines 

print("Function readlines():")
print()
file_object=open("a.txt","r")
file_data=file_object.readlines()
print(file_data)
file_object.close()