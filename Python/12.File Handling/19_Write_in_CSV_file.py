import csv

fw=open("a.csv","w")
cw=csv.writer(fw)

header_list=['RNO','NAME','PER']
row1=[101,'AAA',88]
row2=[102,'BBB',75]

cw.writerow(header_list)
cw.writerow(row1)
cw.writerow(row2)

print("Data written to std.csv")
fw.close()