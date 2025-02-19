# Write a Python program to merge two dictionaries into one.

dict1={
    "name": "Yash Pandey",
    "age": 21,
    "city": "New Delhi"
}

dict2={
    "CGPA":8.7,
    "Branch": "CSE",
    "University": "MAIT"
}

print("Week-4 Exp-6. , Yash Pandey 12214802722")
# Merging two dictionaries into one
for key in dict2:
    if key not in dict1:
        dict1.update({key:dict2[key]})

print(dict1)