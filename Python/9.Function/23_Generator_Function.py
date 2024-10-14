def display(n):
    i=1
    while i<=n:
        yield i
        i=i+1
        
g=display(10)
L=list(g)
print("First n Numbers : ",L)

