#demonstrate bank operations using lists and tuples
#use for 8 after formattig output
def t():
    print("----------------------")
def Accinput():
    check = int(input("Enter Account Number:"))
    return check
def withdraw(balance):
    amount = float(input("Enter withdraw amount:"))
    if amount <= balance:
        balance = balance - amount
        print(f"Current Balance:{balance}")
        t()
    else:
        print("Enter Valid Amount")
        t()
    return balance
def deposit(balance):
    amount = float(input("Enter deposit amount:"))
    balance = balance + amount
    print(f"Current Balance:{balance}")
    t()
    return balance 
def display(total):
    details = f"""
    {'='*30}
    ACCOUNT DETAILS 
    {'='*30}
    Account Number: {total[0][i][0]}
    Name: {total[0][i][1]}
    Aadhar Number:{total[0][i][2]}
    City:{total[0][i][3]}
    Balance:{total[1][i]}
    {'='*30}
    """
    print(details)
    t()
accno = 1000,8008
name = ("Amit","Sparsh")
aadhar = ("2325442344","324243487")
city = ("Mulki","Mira Road")
balance = [900.00,440.36]
account = ([accno[0],name[0],aadhar[0],city[0]],[accno[1],name[1],aadhar[1],city[1]])
total = [account,balance]
print("Welcome to Bank")
exit = False
i = 0
check = Accinput()
while exit is False:
    if check in accno:
        print("Account found..")
        i = accno.index(check)
        choice = int(input("""Enter your choice: \n1.Withdraw \n2.Deposit \n3.Account Details \n4.Exit\n"""))
        if choice == 1:
            balance[i] = withdraw(balance[i])
        if choice == 2:
            balance[i] = deposit(balance[i])
        if choice == 3:
            display(total)
        if choice == 4:
            exit = True
            print("Thank you for using our services")
            t()
    else:
        print("Enter Valid Account Number.")
        out = input("Want to Exit application?[Yes/No]:")
        if "Yes" in out:
            t()
            exit = True
        else: 
            check = Accinput()
            pass