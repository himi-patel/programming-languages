# Python Syntax & Variables

# 1. Write a program to print "Hello, World!"
print("hello world")

# 2. Declare a variable name and print "Hello, name!"
name="himi"
print("hello",name)

# Data Types & Casting
# 3. Convert an integer to a float.
integer=float(2)
print(integer)

# 4. Get user input as a string and convert it to an integer.
# user=input("enter user name=")
# username=int(user)
# print(type(username))

# Operators & Booleans
# 5. Check if a number is even or odd.
# user1=int(input("enter number="))
# if user1 % 2==0:
#     print("even")
# else:
#     print("odd")

# 6. Compare two numbers and print which one is greater.
a,b=23,56
if a>b:
    print("a is grater than b")
elif a<b:
    print("b is grater than a")
else:
    print("a and b are equal")

# Strings
# 7. Reverse a string without using slicing ([::-1]).
s="hello"
reversed=""
for i in s:
    reversed=i+reversed
print(reversed)

# 8. Count the number of vowels in a string.
s = "Hello World"
vowels="aeiouAEIOU"
count=0
for i in s:
    if i in vowels:
        count+=1
print("number of vowels in the string:",count)

# Lists, Tuples, Sets, Dictionaries
# 9. Create a list of numbers and print the sum of all elements.
numbers=[1,2,3,4,5,6,7,8]
sum=0
for i in numbers:
    sum+=i
print(sum)

# 10. Convert a list into a set to remove duplicates.
fruits=["a", "b", "c", "d", "a"]
print(set(fruits))

# 11. Create a dictionary with student names and their marks. Print the highest mark.
students={
    "student1":{
    "name":"john",
    "marks":45 
    },
     "student2":{
    "name":"john2",
    "marks":67 
    },
    "student3":{
    "name":"john3",
    "marks":78
    },
}
marks=[]
for student in students.values():
    marks.append(student["marks"])
print(max(marks))
# print(max(student["marks"] for student in students.values())) shortest way to write

students1 = {
    "Alice": 85,
    "Bob": 92,
    "Charlie": 78,
    "David": 88
}
print(max(students1.values()))

# If...Else & Loops
# 12. Write a program to check if a number is positive, negative, or zero.
z=34
if z>0:
    print("positive")
elif z<0:
    print("negative")
else:
    print("zero")

# 13. Print numbers from 1 to 10 using a for loop.
for i in range(1,11):
    print(i)

# 14. Find the sum of even numbers from 1 to 50 using a while loop.
j=1
sum1=0
while j<=50:
    if j%2==0:
        sum1+=j
    j+=1
print("sum of even numbers=",sum1)

# Functions & Lambda
# 15. Write a function to find the factorial of a number.
def factorial():
    fact=1
    for i in range(1,6):
       fact*=i
    print("factorial=",fact)
factorial()

# 16. Use a lambda function to find the square of a number.
x=lambda a:a*a
print(x(2))

# Arrays
# 17. Find the maximum element in an array.
arr=[1,2,7,4,5]
print(max(arr))

# Classes & Objects
# 18. Create a class Person with attributes name and age, and print details.
class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def __str__(self):
        return f"{self.name} is {self.age} years old"
p1=person("himi",23)
