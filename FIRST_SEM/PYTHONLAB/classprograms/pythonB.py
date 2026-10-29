price,sales = float,float
totaln,totals,discount = 0,0,0
k = 4
for i in range(k):
    print("----HEN-SHED EGG SLIP----")
    s = input("Enter shed name:")
    n = int(input("Enter number of eggs collected:"))
    w = float(input("Average egg weight(in grams):"))
    if w >= 60:
       Grade = 'Large'
       price = 6.50
    elif w >= 50 and w <= 59.9:
       Grade = 'Medium'  
       price = 5.00
    elif w < 50:
       Grade = 'Small'
       price = 3.50
       if w < 45:
           Grade = 'Below Standard'
           price = 0
    if n > 500:
      discount = 5
    if i == 0:
       highestn = n
    n2 = n
    if highestn < n2:
       highestn = n2
       j = s
       p = j
    sales = n*price - (discount*(n*price)/100)
    print(f"Shed Name:{s}")
    print(f"Eggs Collected:{n}")
    print(f"Average Weight:{w}g")
    print(f"Grade:{Grade}")
    if price == 0:
     print(f"Batch Rejected due to:{Grade}")
    else:
     print(f"Price per egg:Rs.{price}")
     if discount != 1:
         print(f"Discount applied:{discount}%")
     print(f"Final Sales Amount:Rs.{sales}")
     print("-------------------------------")
     totals += sales 
     totaln += n
     i += 1
print("====Daily Farm Summary====")
print(f"Total eggs collected:{totaln}")   
print(f"Total sales amount:Rs.{totals}") 
print(f"Shed with highest number of eggs collected is: Shed {p}")