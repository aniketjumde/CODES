with open("a.txt","r") as f:
    data=f.read()
    print(data)
    print("filed closed :",f.closed)
print("filed closed :",f.closed)