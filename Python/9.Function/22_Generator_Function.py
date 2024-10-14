def display(n):
    i=1
    while i<=n:
        yield i
        i=i+1
        
g=display(10)
print("First n Numbers :")

for data in g:
    print(data)
