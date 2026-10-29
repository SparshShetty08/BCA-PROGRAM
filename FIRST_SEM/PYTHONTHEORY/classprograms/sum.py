a = int(input("Enter number:\n"))
even,total,x,y,sum = 0,0,0,0,0
for i in range(a):
    if i%2 == 0:
        even += i                                     #add all numbersadd even numbers,largest prime,find square numbers,print running total every multitude of 100s
    total += i
    print("-----------------------\n")
    print("Prime numbers:\n")
    for k in range(2,8):
        if i % k == 0: break
    else:
        print(f"{i} is prime\n")
    b = i
    print("---------------------\n")
    print("Perfect squares:\n")
    for j in range(i):
        if j*j == 0:
            print(f"{i}\n")
            while ( b != 0):
                x = b % 10
                b = b // 10
                sum += x
            print (f"Sum of digits of perfect square {i}:{sum}\n")   
            sum = 0  
print("---------------------")
print(f"Total: {total}\n")
if total % 100 == 0 and total != 0:
    print(f"Total exceeded multiple of 100: {total}\n") 
print("---------------------")
print(f"Sum of even numbers: {even}")