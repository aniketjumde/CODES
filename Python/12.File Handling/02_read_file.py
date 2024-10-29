try:
    f=open("b.txt","r")
    data=f.read()
    print(data)
    f.close()
except FileNotFoundError:
    print("Invalid File Name")