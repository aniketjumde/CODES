import csv

fw=open("a.csv",'w')

cw=csv.writer(fw)
cw.writerow(['RNO','NAME','PER'])
while True:
    try:
        rno=int(input("Enter the roll No :"))
        name=input("Enter the Name :")
        per=float(input("Enter the percentage :"))
        
        cw.writerow([rno,name,per])
        
    except Exception as e:
        print("Unknown error :",e)

    choice=input("Do you want to continue[Yes/No] :")

    if choice.lower()=='yes':
        continue
    else:
        break
    
print("Data written to a.csv")
fw.close()