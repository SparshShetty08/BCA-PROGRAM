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
def item_cost(item, qty):
    quan = int(qty.split(",")[0]),int(qty.split(",")[1])
    if len(qty.split(",")) > 2 and qty.split(",")[2] != '':
        quan = quan + (int(qty.split(",")[2]),)
    if all(quan <= 0 for quan in quan):               #all() function checks if all the quantities are less than or equal to 0
        return 0
    subtotal = get_price(item)
    for quan in quan:
        subtotal = subtotal * quan
    return subtotal
def calculate_gst(amount, rate=0.05):
    gst = amount * rate
    return round(gst, 2)
def generate_bill(subtotal,discount_percent):
    discount = subtotal * discount_percent
    amount_after_discount = subtotal - discount
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount, gst, total
def split_bill(total, people):
    each_pays = total // people   #floor division for whole number of rupees
    left_over = total % people
    return each_pays, round(left_over, 2)
people = int(input("Enter number of people: "))
order = input("Enter your order (items and respective quantities): ")
item, qty = order.split()
subtotal = item_cost(item, qty)
discount, gst, total = generate_bill(subtotal, discount_percent=0.1)
each, extra = split_bill(total, people)
print("Subtotal :Rs.", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :Rs.", total)
print("Each pays: Rs.", each, "| Left over: Rs.", extra)
    