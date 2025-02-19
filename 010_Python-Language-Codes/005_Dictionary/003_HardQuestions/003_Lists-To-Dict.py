# Write a Python program to convert two lists into a dictionary (one as keys, the other as values).

list1=["name","age","city"]
list2=["Yash","21","New Delhi"]

print("Week-4 Exp-13. , Yash Pandey 12214802722")
ans={}
for i in range(len(list1)):
    ans.update({list1[i]:list2[i]})

print(ans)