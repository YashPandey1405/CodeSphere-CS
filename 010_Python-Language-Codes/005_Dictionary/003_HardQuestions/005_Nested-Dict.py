# Write a Python program to implement a nested dictionary where each key 
# contains another dictionary, and retrieve specific values dynamically.

def create_nested_dict():
    return {
        'Alice': {'age': 25, 'city': 'New York'},
        'Bob': {'age': 30, 'city': 'Los Angeles'},
        'Charlie': {'age': 28, 'city': 'Chicago'}
    }

def get_value(nested_dict, key, sub_key):
    return nested_dict.get(key, {}).get(sub_key, 'Key not found')

print("Week-4 Exp-15. , Yash Pandey 12214802722")
nested_dict = create_nested_dict()

print("Alice's age:", get_value(nested_dict, 'Alice', 'age'))
print("Bob's city:", get_value(nested_dict, 'Bob', 'city'))
print("Charlie's age:", get_value(nested_dict, 'Charlie', 'age'))