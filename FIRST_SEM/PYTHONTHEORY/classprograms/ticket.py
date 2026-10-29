baseprice,discount,scdis,hike = 4000,50,15,25  #simplest
day = str(input("Enter day of movie:\n"))
age = int(input("Enter your age:\n"))
time = str(input("Enter movie start time:\n"))
if day in ("Sunday","Saturday") or time in ("18:00","19:00"):
    baseprice = baseprice + (hike*baseprice/100)
    if age <= 5:
     baseprice = baseprice - (discount*baseprice/100)
    elif age >= 60:
     baseprice = baseprice - (scdis*baseprice/100)
else:  
    if age <= 5 or age >= 60:
       baseprice = baseprice - (discount*baseprice/100)
print(f"Your ticket price is {baseprice}")