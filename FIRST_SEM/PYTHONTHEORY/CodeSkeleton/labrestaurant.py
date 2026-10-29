def get_price(item):
    i = 0
    itemlist = item.split(",")
    if 'Idli' in itemlist or 'idli' in itemlist or 'IDLI' in itemlist:
           i = i + 30
    if 'Dosa' in itemlist or 'dosa' in itemlist or 'DOSA' in itemlist:
           i = i + 50
    if 'Coffee' in itemlist or 'coffee' in itemlist or 'COFFEE' in itemlist:
           i = i + 20
    return i
def item_cost(item, qty,discount_percent):
    quan = int(qty.split(",")[0]),int(qty.split(",")[1])
    if len(qty.split(",")) > 2 and qty.split(",")[2] != '':
        quan = quan + (int(qty.split(",")[2]),)
    if all(quan <= 0 for quan in quan):               #all() function checks if all the quantities are less than or equal to 0
        return 0
    price = get_price(item)
    for quan in quan:
        price = price * quan
        discount = price * discount_percent
        amount_after_discount = price - discount
    return discount,price,amount_after_discount
def calculate_gst(amount, rate=0.05):
    gst = amount * rate
    return round(gst, 2)
def generate_bill(amount_after_discount):
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount, gst, total
def split_bill(total, people):
    each_pays = total // people   #floor division for whole number of rupees
    left_over = total % people
    return each_pays, left_over
# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.
people = int(input("Enter number of people: "))
order = input("Enter your order (items and respective quantities): ")
item, qty = order.split()
discount,subtotal,amount_after_discount = item_cost(item,qty,discount_percent=0.1)
gst = generate_bill(amount_after_discount)
total = amount_after_discount + gst - discount
each, extra = split_bill(total, people)
print("Subtotal :Rs.", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :Rs.", total)
print("Each pays: Rs.", each, "| Left over: Rs.", extra)
