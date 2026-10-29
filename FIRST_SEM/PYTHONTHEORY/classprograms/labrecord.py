a = int(input("Enter first number:\n"))
b = int(input("Enter second number:\n"))
c = a + b
print("The sum is:", c)
c = a - b
print("The difference is:", c)
c = a * b
print("The product is:", c)
c = a / b
if b == 0:
    print("Error: Division by zero is not allowed.")
else:
    print("The quotient is:", c)
c = a // b
if b == 0:
    print("Error: Floor division by zero is not allowed.")
else:
    print("The floor division is:", c)
c = a % b
print("The remainder is:", c)
c = a ** b
print(f"The power is: {c}")