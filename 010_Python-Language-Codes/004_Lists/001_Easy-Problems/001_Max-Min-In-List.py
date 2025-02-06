# Write a Python program to find the maximum and minimum values in a list.

print("Week-3 Exp-1 , Yash Pandey 12214802722")
Numbers=[2,3,4,5,1,6,8,9,7]
max=Numbers[0]
min=Numbers[0]

for i in range(len(Numbers)):
    if Numbers[i]>max:
        max=Numbers[i]
    if Numbers[i]<min:
        min=Numbers[i]

print(f"In {Numbers} , Max. Is {max} & Min. Is {min}")