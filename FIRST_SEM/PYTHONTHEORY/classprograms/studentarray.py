#store single student data:name,rollno,phone,email,five subject marks,subject total
#implemented using lested list
def studentinput(name,rollno,phone,email):
    name = input("Enter name:")
    rollno = int(input("Enter rollno:"))
    phone = input("Enter phone:")
    email = input("Enter email:")
    return name,rollno,phone,email
def inputmarks():
    marks1 = float(input("Enter marks for subject 1:"))
    marks2 = float(input("Enter marks for subject 2:"))
    marks3 = float(input("Enter marks for subject 3:"))
    marks4 = float(input("Enter marks for subject 4:"))
    marks5 = float(input("Enter marks for subject 5:"))
    student_marks = [marks1, marks2, marks3, marks4, marks5]
    total = sum(student_marks)
    return student_marks,total
#def output(total):
    print(f"Total Marks:{total}")
    print(f"{student}")
n = True
while n is True:
    number = int(input("Enter number of students:"))
    if number == 0:
         print("Enter Valid number of students.")
    else:
         school = []
         for i in range(0,number):
             student = [studentinput(0,0,0,0),inputmarks()]
             print(f"Student Data:{student}")
             school.append(student)
         print("Student list =[")
         for j in range(0,len(school)):   
             print(f"{school[j]}\n")
         print("]")
         n = False