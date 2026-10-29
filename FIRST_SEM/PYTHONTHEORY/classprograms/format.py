def findtotalper(eng,math,python):     #defines a function to calculate total and percentage
    total = eng + math + python
    if total > 300:
        print("Error: Total marks cannot exceed 300.")
        return None, None
    else:
        percentage = (total / 300) * 100
        return total, percentage
name1 = input("Enter name of student 1: ")
eng1 = int(input("Enter marks obtained in English: "))
math1 = int(input("Enter marks obtained in Math: "))
python1 = int(input("Enter marks obtained in Python: "))
total_marks, percentage_marks = findtotalper(eng1, math1, python1)

name2 = input("Enter name of student 2: ")
eng2 = int(input("Enter marks obtained in English: "))
math2 = int(input("Enter marks obtained in Math: "))
python2 = int(input("Enter marks obtained in Python: "))
total_marks2, percentage_marks2 = findtotalper(eng2, math2, python2)

print(f"{'NAME':<20}\tENGLISH\tMATH\tPYTHON\tTOTAL\tPERCENTAGE")
print(f"{name1:<20}\t{eng1}\t{math1}\t{python1}\t{total_marks}\t{percentage_marks:.2f}%")
print(f"{name2:<20}\t{eng2}\t{math2}\t{python2}\t{total_marks2}\t{percentage_marks2:.2f}%")