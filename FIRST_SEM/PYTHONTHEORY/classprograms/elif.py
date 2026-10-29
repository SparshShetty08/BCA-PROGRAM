a = int(input("Enter your first number:"))
b = int(input("Enter your second number:"))
choice = int(input("Enter your choice: 1 for sum, 2 for product, 3 for division, 4 for difference: "))
if choice == 1:
    sum = a + b
    print(f"The sum of {a} and {b} is {sum}")
elif choice == 2:
    product = a*b
    print(f"The product of {a} and {b} is {product}")
elif choice == 3:
    division = a/b
    print(f"The division of {a} and {b} is {division}")
elif choice == 4:
    difference = a-b
    print(f"The difference of {a} and {b} is {difference}")
else:
    print("Invalid choice!")