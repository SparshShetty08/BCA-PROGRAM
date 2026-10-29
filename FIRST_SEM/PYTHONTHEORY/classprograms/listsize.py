def dash():
    print("----------------------------------")
def input(size):
    list2 = []
    for i in range(size):
      element = int(input(f"Enter {i + 1} element:"))
      list2.append(element)
    return list2
def elements():
    list1 = input()
    print("List elements are:")
    print(list1)
    return list1
def addition(list1,size):
    for i in range(size):
      sum = sum + list1[i]
    print("The sum of list elements is:",sum)
dash()
size = int(input('Enter size of list:'))
input(size)
elements()
addition(elements(),size)
dash()