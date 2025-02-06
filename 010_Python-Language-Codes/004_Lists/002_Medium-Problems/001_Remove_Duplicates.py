# Write a program to remove duplicates from a list and display the unique elements.

print("Week-3 Exp-6 , Yash Pandey 12214802722") 
Numbers = [2, 3, 4, 5, 2, 3, 5, 1, 6, 8, 5, 4, 1]
ans=[]

for i in range(len(Numbers)):
    if(Numbers[i] not in ans):
        ans.append(Numbers[i])

print(f"After Duplicates Removal , The List Is {ans}")