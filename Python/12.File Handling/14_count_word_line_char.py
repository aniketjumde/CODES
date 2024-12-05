f=open("a.txt","r")
word_count=0
line_count=0
char_count=0

for line in f:
    line_count=line_count + 1
    char_count=char_count + len(line)
    lst_word=line.split()
    word_count=word_count + len(lst_word)

f.close()   
print("No.of.Lines :",line_count)
print("No.of.Word  :",word_count)
print("No.of.Character :",char_count)
