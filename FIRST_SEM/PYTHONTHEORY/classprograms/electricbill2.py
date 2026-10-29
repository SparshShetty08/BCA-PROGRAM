payment = input("Payment completed?(Yes/no):\n")
bill,discount,penalty,duedate,penaltyc = 200,10,10,30,10
rate1,rate2,rate3,rate1c,rate2c,rate3c = 5,6,8,10,12,15
if payment == "Yes":
	print("Payment completed.")
else:
   date =input("Enter Date:(DD/MM/YYYY)\n")
   daydate = int(date.split('/')[0])
   units = int(input("Units consumed this month(600 max):\n"))
   category = input("Enter your category:\n")
   if category == "Commercial":
       if units <= 100:
              bill = units*rate1c
       elif 300 >= units >= 101:
              bill = 100*rate1c + (units-100)*rate2c
       elif units > 300:
              bill = 100*rate1c + 200*rate2c + (units-300)*rate3c
              if units > 600:
                 bill += (penaltyc*bill/100)
       if daydate > duedate:
             print(f"Penalty of {penalty}% given\n")
             bill += (penalty*bill/100)
       elif daydate < duedate:
             print("Early discount applied")
             bill -= (discount*bill/100)
   else:
       if units <= 100:
                  bill = units*rate1
       elif 300 >= units >= 101:
                  bill = 100*rate1 + (units-100)*rate2
       elif units > 300:
                  bill = 100*rate1 + 200*rate2 + (units-300)*rate3
       if daydate > duedate:
             print(f"Penalty of {penalty}% given\n")
             bill += (penalty*bill/100) 
       elif daydate < duedate:
             print("Early discount applied")
             bill -= (discount*bill/100)
   print(f"Your bill is Rs.{bill}")