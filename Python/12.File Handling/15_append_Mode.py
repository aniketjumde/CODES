#This Mode is open file and write at the end point of the file
#Othrwise file is not exit create file and write 

f=open("a.txt","a")
f.write("Hello Everyone ")
f.close
print("File is Created Successfully")