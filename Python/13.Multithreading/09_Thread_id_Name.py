import time
from threading import *

def display():
        print("Display Thread Name",current_thread().name)
        print("Display Thread id",current_thread().ident)
        print("----------------------------------------")
        


#main-script
t1=Thread(target=display)

t1.start()
print("Main Thread Name",current_thread().name)
print("Main Thread id",current_thread().ident)
print("----------------------------------------")
print("No.of Active Thread :",active_count())