# Write a Python program that takes a string as input and prints it in reverse without using slicing ([::-1]).

name=input("enter username=")
reversed=""
for i in name:
    reversed=i+reversed;
print(reversed)


j=0;
while len(name)<j:
    reversed=name[j]+reversed
    j+=1
print(reversed)