# Write a Python program to create a dictionary with three key-value pairs and print it.

dict={}

print("Week-4 Exp-1. , Yash Pandey 12214802722")
for i in range(3):
    key = input("Enter key : ")
    value = int(input(f"Enter value For Key '{key}' : "))
    dict.update({key: value})

print(dict)