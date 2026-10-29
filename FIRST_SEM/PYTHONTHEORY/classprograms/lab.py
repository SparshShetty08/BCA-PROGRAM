account_no = int(input("Account Number:"))
holder_name = input("Account Holder Name:")
dob = input("Date of Birth((dd-mm-yyyy):")
email = input("Email ID:")
contact = input("Contact Number:")
add = input("Address:")
balance = float(input("Balance:"))
customer = (account_no,holder_name,dob,[email,contact,add,balance])

def display(customer_temp):
    print("\n" + "ACCOUNT DETAILS")
    print("-"*60)
    print(f"{'Field':<20}{'Value':<40}")
    print("-"*60)
    print(f"{'Account Number':<20}{customer_temp[0]:<40}")
    print(f"{'Holder Name':<20}{customer_temp[1]:<40}")
    print(f"{'Date of Birth':<20}{customer_temp[2]:<40}")
    print(f"{'Email ID':<20}{customer_temp[3][0]:<40}")
    print(f"{'Contact Number':<20}{customer_temp[3][1]:<40}")
    print(f"{'Address':<20}{customer_temp[3][2]:<40}")
    print(f"{'Balance':<20}{customer_temp[3][3]:<40.2f}")
    print("-"*60)

display(customer)

amount = float(input("Enter amount to deposit:"))
customer[3][3] += amount

print(customer)
customer[1] = "NewName"