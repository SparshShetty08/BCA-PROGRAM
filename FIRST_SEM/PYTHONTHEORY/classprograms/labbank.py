accountno = input("Enter your account number: ")
balance = i = 0

while i== 0:
    choice = int(input("Enter your choice: \n1.Deposit \n2.Withdraw \n3.Display Account Details \n4.Exit\n"))
    if choice == 1:
        deposit_amount = float(input("Enter the amount to deposit: "))
        balance += deposit_amount
        print(f"Deposited: {deposit_amount}. New balance: {balance}")
        i = 0
    elif choice == 2:
        withdraw_amount = float(input("Enter the amount to withdraw: "))
        if withdraw_amount <= balance:
            balance -= withdraw_amount
            print(f"Withdrew: {withdraw_amount}. New balance: {balance}")
        else:
            print("Insufficient funds.")
        i = 0
    elif choice == 3:
        print(f"Account Number: {accountno}")
        print(f"Balance: {balance}")
        i = 0
    elif choice == 4:
        print("Thank you for using our banking services.")
        break
    else:
        print("Invalid choice. Please try again.")
        i =0