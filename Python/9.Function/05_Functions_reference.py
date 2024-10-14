def display():
    print("Hi")
    print("Good Morning")

print(display)
print(id(display))
print(type(display))
display()               #Function call

a=display               #Copying reference so 'a' will be callabel now
print(a)
print(id(a))
print(type(a))
a()                     #Function call


#If we delete one name still , we can access that function by jusing alise name