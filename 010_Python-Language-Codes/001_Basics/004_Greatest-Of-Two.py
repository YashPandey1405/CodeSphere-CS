# Create a program that asks the user for two numbers and then prints out which number is larger (or if they are equal). ....

print("Yash Pandey - 12214802722")
num1=int(input("Enter The Number 1 ::: "))
num2=int(input("Enter The Number 2 ::: "))

if (num1>num2):
    print(f"{num1} Is Greater Than {num2}")
elif (num1<num2):
    print(f"{num2} Is Greater Than {num1}")
else:
    print(f"{num1} Is Equal To {num2}")