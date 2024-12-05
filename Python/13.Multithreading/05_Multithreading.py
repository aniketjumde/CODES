import time
from threading import *

def display():
    for i in range(1,6):
        print(i,"-->",current_thread().name)
        time.sleep(1)
        
#main-Script
t1=Thread(target=display)
t2=Thread(target=display)
t3=Thread(target=display)

t1.start()
t2.start()
t3.start()

for i in range(1,6):
    print(i,"--->",current_thread().name)
    time.sleep(1)
