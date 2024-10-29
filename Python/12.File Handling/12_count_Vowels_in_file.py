dict_vowels={'a':0,'e':0,'i':0,'o':0,'u':0}
vcnt=0
f=open("a.txt","r")
whole_file=f.read()

for ch in whole_file:
    data=ch.lower()
    if data in dict_vowels:
        dict_vowels[data]=dict_vowels[data]+1              
print("Number of Vowels :")
for ch in dict_vowels:
    print(ch,"----->",dict_vowels[ch])
f.close()