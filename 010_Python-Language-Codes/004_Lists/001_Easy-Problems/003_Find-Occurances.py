# Write a Python program to count the occurrences of a specific element in a list.

print("Week-3 Exp-3 , Yash Pandey 12214802722")
Numbers=[2,7,7,5,1,7,8,9,7]
key=int(input("Enter The Number To Be Searched In List : "))
count=0

for i in range(len(Numbers)):
    if key==Numbers[i]:
        count+=1

print(f"In {Numbers}, The Element {key} Came {count} Times")