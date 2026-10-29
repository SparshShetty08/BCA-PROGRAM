#get employee name,emp number,company name and salary
#store in set and dictionary
name = input("Enter Employee Name:")
number = input("Enter Employee ID:")
email = input("Enter Email:")
contact = input("Enter contact number:")
employee = {name,number,email,contact}
test = set()
print(employee,"\n",test)
dictionary = {"name":name,"number":number,"email":email,"contact":contact}
print(dictionary)
employee.add("ON LEAVE")
employee.update(["80000","5 YEARS"])
print(employee)
employee.remove("ON LEAVE")
employee.discard("5 YEARS")
employee.discard("80000")
print("="*60)
print("EMPLOYEE DETAILS")
print("="*60)
for f in employee:
    if f is name:
        print(f"Name:{f}")
    elif f is number:
        print(f"Number:{f}")
    elif f is email:
        print(f"Email:{f}")
    elif f is contact:
        print(f"Contact:{f}") 
print("="*60)
print("\n")
print("="*60)
print("EMPLOYEE DETAILS")
print("="*60)
print(f"Name:{dictionary['name']}")
print(f"Employee ID:{dictionary['number']}")
print(f"Email:{dictionary['email']}")
print(f"Contact Number:{dictionary['contact']}")
print("="*60)