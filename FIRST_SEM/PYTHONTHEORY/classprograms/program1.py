name = input("Enter your name:")
eng = float(input("Enter your english marks:"))
math = float(input("Enter your math marks:"))
py = float(input("Enter your python marks:"))
total = eng + math + py
if(total>300):
  print("Please input valid marks")
else:
   average = total / 3
   percentage = total/300 *100 #average = percentage if total marks fully divisible by 100
   print(f"Your total is: {total}")
   print(f"Your average marks are: {average}")
   print(f"Your percentage is {percentage}%")