import time
from threading import *

def display():
    for i in range(1,6):
        print(i,"-->",current_thread().name)
        
def show():
    for i in range(1,6):
        print(i,"-->",current_thread().name)
        
#main-script
print("Hi")
t1=Thread(target=display)
t2=Thread(target=show)
t1.start()
t2.start()

for i in range(1,3):
    print(i,"-->",current_thread().name)
    
print("by")