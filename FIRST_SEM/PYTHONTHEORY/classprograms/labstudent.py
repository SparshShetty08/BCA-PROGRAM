#python script to process 3 student details,roll no.,3 subject marks,calculate avg,percentage and display grade based on percentage
#60-75 grade is firstclass,above 75 is distinction  
def rollno(): 
     return int(input("Enter Student Roll number:"))     #Rollno = rollno() puts input value into Rollno
def Marks():
    total = 0
    for num in range(1, 4):                      #give
        marks = float(input(f"Enter Subject {num} marks:"))
        if marks < 0 or marks > 100:
            print("Invalid marks. Please enter marks between 0 and 100.")
            marks = float(input(f"Enter Subject {num} marks:"))
        total = total + marks
    return total
def Average(total):
    average = total / 5.0
    return average
def Percentage(total):
   percentage = (total*100)/300
   return round(percentage, 2)
def Grade(percentage):
   if percentage < 60:
       Grade = 'Second Class'
   if 60 <= percentage <= 70:
       Grade = 'First Class'
   if percentage > 70:
       Grade = 'Distinction'
   if percentage < 40:
       Grade = 'Failed'
   print(f"Grade scored:{Grade}")
i = int(input("Enter number of students:"))
for j in range(1,i+1):
    print(f"For Student {j}:")
    Rollno = rollno()
    total = Marks()
    if total > 500:
        print("Total marks cannot exceed 500. Please enter valid marks.")
        total = Marks()
    average = Average(total)
    percentage = Percentage(total)
    print("-----Student Details-----")
    print(f"Roll number:{Rollno}")
    print(f"Total marks:{total}")
    print(f"Average marks:{average}")
    print(f"Percentage:{percentage}%")
    Grade(percentage)
    print("-------------------------")