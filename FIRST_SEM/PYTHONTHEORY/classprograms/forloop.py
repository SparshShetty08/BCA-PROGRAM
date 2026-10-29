i = 0
a = input("Enter string:\n")
for letter in a:
    print(letter)
    if (letter != ' '):
      i += 1
print("String Length:", i)