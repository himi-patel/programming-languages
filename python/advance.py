# Advanced Level (Difficult)

# File Handling
# 1. Read a file and count the number of words in it.

f=open("demofile.txt","r")
print(len(f.read().split()))
f.close()

# 2. Write a program to append text to an existing file.
# 2. Write a program to append text to an existing file.

f=open("demofile.txt","ta")

f.write("hii there!")
f.close()

f=open("demofile.txt","tr")
print(len(f.read()))



# Object-Oriented Programming
# 3. Implement a banking system with deposit, withdrawal, and balance check methods.



# Advanced Loops & Data Structures
# 4. Write a program to find the second largest number in a list without using sorting.

# 5. Implement a stack using a list.

# Recursion & Advanced Functions
# 6. Solve the Tower of Hanoi problem using recursion.

# 7. Implement a decorator to measure function execution time.

# APIs & Data Processing
# 8. Fetch data from a public API and parse JSON response.
