# Program to find the second largest number in a list

print("Week-3 Exp-8 , Yash Pandey 12214802722") 

Numbers = [2, 3, 4, 5, 2, 3, 5, 1, 6, 8, 5, 4, 7, 1]

# Initialize max and second
max_val = Numbers[0]
second = -float('inf')  # Initialize second as negative infinity

# Traverse the list to find the largest and second largest
for num in Numbers:
    if num > max_val:
        second = max_val
        max_val = num
    elif num > second and num != max_val:
        second = num

# Output the result
if second != -float('inf'):
    print(f"In {Numbers}, The Second Largest Element Is: {second}")
else:
    print("There is no second largest element.")
