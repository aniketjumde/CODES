char=input("Enter the alphabets :")
char=char.upper()
match char:
    case 'A' | 'E' | 'I' | 'O' | 'U' :
        print("Given Alphabets are Vowels..!")
    case _:
        print("Given Alphabets are Not Vowels..!")