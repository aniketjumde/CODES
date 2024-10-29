try:
    fileName=input("Enter the File name :")
    file=open(fileName,"r")
    whole_file=file.readlines()
    for data in whole_file:
        print(data,end="")
    file.close()    
except:
    print("Invalid File Name")
    
