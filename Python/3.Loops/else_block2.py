# All operations are not perfoprm in loop then Else block can not be execute..
for i in range(1,8):
    if i%9==0:
        break
    print(i)
else:
     print("STEP 2 :Succesful exicution.........!") 


"""
1
2
3
4
5
6
7
STEP 2 :Succesful exicution.........!

"""

