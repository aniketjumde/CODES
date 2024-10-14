#we can call function by passing any  number of keyword arguments . internally these keyword arguments
#will be stored inside  a dictionary.in background packing of dictionary is happening

def display(**a):
    print(a)
    
display(a=10,b=23,c=45)
display(rno=101,name="Aniket",per=98.2)