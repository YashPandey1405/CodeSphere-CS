# Write a Python program to invert a dictionary (swap keys and values).

dict={
    "name": "Yash Pandey",
    "age": 21,
    "city": "New Delhi"
}
ans={}

print("Week-4 Exp-10. , Yash Pandey 12214802722")

for item in dict:
    value=dict.get(item)
    ans.update({value:item})

print(ans)