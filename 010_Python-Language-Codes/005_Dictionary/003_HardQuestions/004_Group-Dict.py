# Write a Python program to group a list of dictionaries by a common key.

from collections import defaultdict

def group_by_key(data, key):
    grouped_data = defaultdict(list)
    for item in data:
        grouped_data[item[key]].append(item)
    return dict(grouped_data)

print("Week-4 Exp-14. , Yash Pandey 12214802722")
data = [
    {'name': 'Alice', 'age': 25},
    {'name': 'Bob', 'age': 30},
    {'name': 'Alice', 'age': 28},
    {'name': 'Charlie', 'age': 25}
]

# Grouping by 'name'
grouped_by_name = group_by_key(data, 'name')
print("Grouped by name:", grouped_by_name)

# Grouping by 'age'
grouped_by_age = group_by_key(data, 'age')
print("Grouped by age:", grouped_by_age)
