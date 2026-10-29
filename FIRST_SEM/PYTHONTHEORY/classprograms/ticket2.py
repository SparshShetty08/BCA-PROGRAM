baseprice,discount,scdis,dhike,evehike,afhike = 4000,50,15,25,30,10  #without def function
day = str(input("Enter day of movie:\n"))
age = int(input("Enter your age:\n"))
time = str(input("Enter movie timing:\n"))
if day in ("Sunday","Saturday"):
     baseprice += (dhike*baseprice/100)
if time == "evening":
     baseprice += (evehike*baseprice/100)
if time == "afternoon":
     baseprice += (afhike*baseprice/100)
if age <= 5:
     baseprice += (discount*baseprice/100)
elif age >= 60:
     baseprice -= (scdis*baseprice/100)
print(f"Your ticket price is {baseprice}")