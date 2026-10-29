marks = []
for number in range(5):
    mark = int(input("Enter marks:"))
    marks.append(mark)
print('elements are:')
for i in range(len(marks)):
    print(marks[i]) 
print(marks[0:5:3])