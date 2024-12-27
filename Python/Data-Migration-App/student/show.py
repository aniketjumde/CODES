

def display_student_information(list_to_list):  #[[101,AAA,89],[102,BBB,67],[103,CCC,85]]
    print("RNO \t NAME \t PER")
    for record in list_to_list:
        print(f'{record[0]} \t {record[1]} \t {record[2]}')