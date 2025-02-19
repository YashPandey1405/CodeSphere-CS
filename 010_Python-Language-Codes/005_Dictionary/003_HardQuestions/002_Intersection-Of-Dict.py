# Write a Python program to find the intersection of two dictionaries (common keys with the same values).

dict1={
    "a": 1,
    "b": 2,
    "c": 3,
    "d": 4
}

dict2={
    "a": 1,
    "b": 3,
    "c": 3,
    "d": 6
}

ans={}
print("Week-4 Exp-12. , Yash Pandey 12214802722")

for item in dict1:
    if item in dict2 and dict1[item] == dict2[item]:
        ans[item] = dict1[item]

print(ans)