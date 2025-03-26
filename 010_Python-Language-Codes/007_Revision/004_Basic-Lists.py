# Lists and arrays: Create a program that prompts the user for a list of numbers 
# and then sorts them in ascending order.

print()
print("Week-6 Exp-4 , Yash Pandey - 12214802722")

list=[]
for i in range(5):
    num=int(input(f"Enter The number For Index-{i} : "))
    list.append(num)    

list.sort()  # Sorting the list in place
print(f"The Sorted List Is {list}")
print()