payment = input("Payment completed?(Yes/no):\n")
discount,penalty,duedate,penaltyc = 10,10,30,10
rate1,rate2,rate3,rate1c,rate2c,rate3c = 5,6,8,10,12,15
bill,a,b = float(),int(),int()
if payment == "Yes":
	print("Payment completed.")
else:
   date =input("Enter Date:(DD/MM/YYYY)\n")
   daydate = int(date.split('/')[0])
   units = int(input("Units consumed this month(600 max):\n"))               #division and modulusto calculate the units consumed in each slab
   category = input("Enter your category(Commercial/Residential):\n")
   extra = units
   if category == "Commercial":
       units = int(units / 10)                                                #used it to calculate hundreth position of units for if statements
       units = int(units / 10)                                                # get 100 & 150 from 250 using division and modulus
       a = units % 10                                                          
       if a == 0:   
             units = int(units / 10)
             b = units % 10                                                  
             if b >= 1:
                 bill = 100*rate1c + 200*rate2c + (extra - 300)*rate3c
                 bill += (penaltyc*bill/100)
       if 0 < a <= 1:
             bill = extra*rate1c
       if 1 < a <= 3:
             bill = 100*rate1c + (extra - 100)*rate2c
       if a >= 3:         
             bill = 100*rate1c + 200*rate2c + (extra - 300)*rate3c
             if a > 6: 
                 bill += (penaltyc*bill/100)  
       if daydate > duedate:
             print(f"Penalty of {penalty}% given\n")
             bill += (penalty*bill/100)
       elif daydate < duedate:
             print("Early discount applied")
             bill -= (discount*bill/100)
   else:
       units = int(units / 10)
       units = int(units / 10)
       a = units % 10  
       if a == 0:   
             units = int(units / 10)
             b = units % 10
             if b >= 1:
                 bill = 100*rate1c + 200*rate2c + (extra - 300)*rate3c
                 bill += (penaltyc*bill/100)
       if 0 < a <= 1:
             bill = extra*rate1
       if 1 < a <= 3:
             bill = 100*rate1 + (extra - 100)*rate2
       if a >= 3:         
             bill = 100*rate1 + 200*rate2 + (extra - 300)*rate3
       if daydate > duedate:
         print(f"Penalty of {penalty}% given\n")
         bill += (penalty*bill/100) 
       elif daydate < duedate:
         print("Early discount applied")
         bill -= (discount*bill/100)
   print(f"Your bill is Rs.{bill}")