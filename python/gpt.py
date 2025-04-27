# Coding Challenge 1: Reverse a String

a="hello"
rev=""
for i in a:
    rev=i+rev
print(rev)

#  Coding Challenge 2: Count Occurrences of a Character in a String

i=0
for j in a:
    if j=="l":
        i+=1
print(i)
# i = a.count("l")


# 🚀 Coding Challenge 3: Find the Largest Element in a List
a=[1,2,3,4,5]

print(max(a))
a=[1, 2, 3, 12, 5, 6, 7, 8, 9]
# largest = 0
# for num in a:
#     if num > largest:
#         largest = num
# print(largest)

# 🚀 Coding Challenge 4: Sum of Digits in a Number

a=12345
sum=0

while a>0:
    b=a%10
    sum+=b
    a=a//10 

print(sum)
# Check for Palindrome
rev=0
a=123
c=a
while a>0:
    b=a%10
    rev=(rev*10+b)
    a=a//10

if c== rev:
    print("Palindrome")
else:
    print("Not Palindrome")

    # 🚀 Bonus Challenge: FizzBuzz
# Write a program to print numbers from 1 to 50, but for multiples of 3, print "Fizz" instead of the number, and for multiples of 5, print "Buzz". For numbers which are multiples of both 3 and 5, print "FizzBuzz".
for i in range(1, 51):

    if i%3==0:
        print("Fizz",i)
    elif i%5==0:
        print("Buzz",i)
    elif i%3==0 and i%5==0:
        print("FizzBuzz",i)
    else:
        print(i)

