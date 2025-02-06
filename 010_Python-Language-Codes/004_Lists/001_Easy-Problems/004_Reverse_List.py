# Write a program to reverse a list.

print("Week-3 Exp-4 , Yash Pandey 12214802722")
Numbers=[2,3,4,5,1,6,8,9,7]
n=len(Numbers)
print(f"Before Reverse , The List Is {Numbers}")

for i in range(int(n/2)):
    temp=Numbers[i]
    Numbers[i]=Numbers[n-i-1]
    Numbers[n-i-1]=temp

print(f"After Reverse , The List Is {Numbers}")