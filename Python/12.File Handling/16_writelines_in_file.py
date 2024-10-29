f=open("a.txt","w")
str1="WelCome To my file\n"
str2="This is the python Folder\n"
str3="I am practice the code of FileHandling\n"
L=[str1,str2,str3]
f.writelines(L)
f.close()
print("File is Created Successfully")