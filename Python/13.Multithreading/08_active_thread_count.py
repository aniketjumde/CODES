
import time
from threading import *

def display():
    for i in range(1,6):
        print(i,"-->",current_thread().name)
    
        
def show():
    for i in range(1,6):
        print(i,"-->",current_thread().name)
        

#main-script
t1=Thread(target=display)
t2=Thread(target=show)
t3=Thread(target=display)
t4=Thread(target=show)
t1.start()
t2.start()
t3.start()
t4.start()   

print("No.of Active Thread :",active_count())

