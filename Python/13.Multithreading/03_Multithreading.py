#Can we Create Multiple Thread

import time
from threading import *

def display():
    for i in range(1,6):
        print(i,":Display ")
        time.sleep(1)
        
def show():
    for i in range(1,6):
        print(i,":Show ",)
        time.sleep(1)

#main-script
t1=Thread(target=display)
t2=Thread(target=show)
t1.start()
t2.start()

for i in range(1,6):
    print(i,":Main Thread")
    time.sleep(1)   