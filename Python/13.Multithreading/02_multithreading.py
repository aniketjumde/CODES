from threading import Thread
import time

def display():
    for i in range(1,6):
        print(i,":User Thread")
        time.sleep(1)


#main-script
t1=Thread(target=display)
t1.start()
for i in range(1,6):
    print(i,":Main Thread")
    time.sleep(1)