# Intermediate Level
import re
import random
import json
import datetime
# Inheritance & Polymorphism
# 1. Create a class Vehicle with a method start(). Create a subclass Car that overrides the start() method.
class Vehicle :
    def start(self):
        print("Vehicle is starting")

class car(Vehicle) :
    def start(self):
        print("Car is starting")
        


v=Vehicle()
v.start()

c=car()
c.start()



# Iterators & Scope
# 2. Implement an iterator for a custom sequence.
a=(1,2,3,4,5)
set1=iter(a)
print(next(set1))   
print(next(set1))   
print(next(set1))   
print(next(set1))   
print(next(set1))   

# 3. Write a function with both global and local variables.
name1="jiya"
def name():
    name1="sita"
    print(name1)

name()
print(name1)
# Modules & Dates
# 4. Import the datetime module and print today’s date.
t=datetime.datetime.now()
print(t.strftime("%d"))
print(t.strftime("%Y-%m-%d"))
# 5. Create a custom module with a function that returns a greeting message.
def greet():
    return "hello good morning!"

# Math & JSON
# 6. Generate a random number between 1 and 100.

print(random.randint(1,100))

# 7. Convert a dictionary into a JSON string.

y={'name':'John', 'age':30, 'city':'New York'}
x=json.dumps(y)
print(x)

# Regular Expressions (RegEx)
# 8. Extract all email addresses from a given text using RegEx.
txt="Contact us at support@example.com or sales@example.org for more info."
pattern = r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}'
x=re.findall(pattern,txt)
print(x)

# Exception Handling
# 9. Handle division by zero using try-except.
try:
    result=10/0
    print(result)
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

# User Input & String Formatting
# 10. Take user input for a name and age and display a formatted message.
username=input("enter name=")
age=int(input("enter age="))
print(f"Hello {username}, you are {age} years old.")