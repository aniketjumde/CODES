#"W" in Write mode open file and OverWrite it
# if file is does not exit then new file is creted and write 

fileName=input("Enter the File Name :")
f=open(fileName,"w")
data=input("Enter the data :")
f.write(data)
f.close()
print("File is Created Successfully")

