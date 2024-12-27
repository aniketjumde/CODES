if __name__ == '__main__':
    # Step 1: Read input and store names and grades
    students = []
    for _ in range(int(input("Enter the number of students: "))):
        name = input("Enter student name: ")
        score = float(input("Enter student grade: "))
        students.append([name, score])
    
    # Step 2: Find unique grades and sort them
    grades = sorted(set([score for name, score in students]))
    second_lowest_grade = grades[1]  # The second-lowest grade

    # Step 3: Get names of students with the second-lowest grade
    second_lowest_students = [name for name, score in students if score == second_lowest_grade]

    # Step 4: Sort names alphabetically
    second_lowest_students.sort()

    # Step 5: Print results
    for name in second_lowest_students:
        print(name)
