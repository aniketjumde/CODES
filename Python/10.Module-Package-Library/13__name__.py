#File gives the path of the file and module 
#program file Syantax : modulename. __file__

import sachin

print("I am in demo.py")

print(__name__) #Run sachin.py as Indivitual. OUTPUT : __main__

print(sachin.__name__) #Run sachin.py as a Module OUTPUT : modulename

print("Byee")