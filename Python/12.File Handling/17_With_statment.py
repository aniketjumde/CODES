# With is used for ex error occurs in the middle of code then code is terminated and the file is open this is disadvantage
# tya disadvantage la handle karnya sathi with statment cha use hoto  
#with statment code terminate zhalayvar ti file close karto without call close function

with open("a.txt","w") as f :
    f.write("Welcome to this directory\n")
    f.write("Welcome to Python\n")
    print("Filed closed :",f.closed)
    
print("Filed closed :",f.closed)