def maximum(a,b):
    if a>b:
        return a
    else:
        return b
ans=maximum(25,89)
print(ans,"is Maximum")

max=lambda x,y:x if x>y else y
print(max(12,35),"is maximum")
print(max(128,35),"is maximum")