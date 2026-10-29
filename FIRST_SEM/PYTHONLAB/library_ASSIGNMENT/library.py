import mysql.connector

#reuse connection(change db ofcourse) for other connection related programs
def connection():
    con=mysql.connector.connect(
        host="localhost",
        user="root",
        password="S7qz4v.g_c!",
        database="consolelibrarydb"
    )
    return con

def add_student(con):
    cursor=con.cursor()

    studentid=input("student id:")
    student_name=input("enter student name:")
    age=int(input("enter age"))
    email=input("enter email")
    phone=input("enter phone number")

    query="insert into student(idstudent,student_name,age,email,phone)values(%s,%s,%d,%s,%s)"

    values=(studentid,student_name,age,email,phone)

    cursor.execute(query,values)

    con.commit()
   
    print("student details added successfully")




#add book detail function
def add_book(con):
    cursor = con.cursor()

    idbook = input("Enter BookID:")
    BookName = input("Enter Book Name:")
    Author = input("Enter Author Name:")
    Category = input("Enter Book Category:")
    No_of_Pages = int(input("Enter Number of Pages"))

    query="insert into book(idbook,BookName,Author,Category,No_of_pages)values(%s,%s,%s,%s,%d)"

    values =(idbook,BookName,Author,Category,No_of_Pages)

    cursor.execute(query,values)

    con.commit()

    print("Book details added successfully")


def add_issue(con):
    cursor = con.cursor()
    
    studentid = input("Enter studentid:")
    bookid = input("Enter Book id:")
    issuedate = input("Enter Issue date(yyyy-mm-dd):")
    returndate = input("Enter Return date(yyyy-mm-dd):")

    query = "insert into issue(studentid,bookid,issuedate,return_date) values (%s,%s,%s,%s)"

    values = (studentid,bookid,issuedate,returndate)

    cursor.execute(query,values)

    con.commit()

    print("Issue details added successfully")

def display_issue(con):
    cursor=con.cursor()
    query="""select issue.idissue,student.StudentName,book.BookName,issue.issuedate,issue.return_date,issue.is_returned
    from issue
    join student on student.idstudent=issue.StudentID
    join book on book.idbook = issue.BookID
    """
    cursor.execute(query)

    records = cursor.fetchall()
    for record in records:
        print(record)
        


con = connection()
if con.is_connected():
    print("Connection established successfully")

n = False
while n is False:
    print("-----Library Management System-----")
    print("1.Add Student Details")
    print("2.Add Book details")
    print("3.Add Issue details")
    print("4.Display issue details")
    print("5.Exit")
    choice = int(input("Enter your choice:"))
    if choice == 1:
        add_student(con)
    elif choice == 2:
        add_book(con)
    elif choice == 3:
        add_issue(con)
    elif choice == 4:
        display_issue(con)
    elif choice == 5:
        print("Thank you for using our program\nApplication Closed.")
        n = True
    else:
        print("Enter valid choice.")
