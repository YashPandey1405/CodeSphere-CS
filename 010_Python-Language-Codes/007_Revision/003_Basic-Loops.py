# Loops: Create a program that calculates the 
# factorial of a number entered by the user using a loop.

print()
print("Week-6 Exp-3 , Yash Pandey - 12214802722")

num=int(input("Enter The Number : "))
ans=1

for i in range(1,num+1):
    ans=ans*i

print(f"The Factorial Of {num} Is : {ans}")
print()