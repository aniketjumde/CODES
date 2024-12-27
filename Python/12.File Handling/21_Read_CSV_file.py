import csv

fr=open("a.csv","r")
cr=csv.reader(fr)
data=list(cr)

print("Whole Data :",data)
print("RNO\tNAME\tPER")
for row in data:
    for column in row:
        print(column,'\t',end="")
    print()
fr.close()
