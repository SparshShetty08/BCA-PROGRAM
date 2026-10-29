name = input("Enter your name:")
eng = float(input("Enter your english marks:"))
math = float(input("Enter your math marks:"))
py = float(input("Enter your python marks:"))
totalob = eng + math + py
total = 300
if(totalob>total):
  print("Please input valid marks")
else:
   average = totalob / 3
   percentage = totalob/total *100 #average = percentage if total marks fully divisible by 100
   print(f"Your total is: {totalob}")
   print(f"Your average marks are: {average}")
   print(f"Your percentage is {percentage:.2f}%")