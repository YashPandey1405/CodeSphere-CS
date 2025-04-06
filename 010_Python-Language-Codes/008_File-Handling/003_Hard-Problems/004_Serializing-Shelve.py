# Serialization and Deserialization with shelve
# Write a program to serialize and deserialize objects using the shelve module.

import shelve

def serialize_data(filename, key, data):
    with shelve.open(filename) as db:
        db[key] = data
        print(f"Data stored under key '{key}' in '{filename}.db'")

def deserialize_data(filename, key):
    with shelve.open(filename) as db:
        if key in db:
            print(f"Data retrieved from '{filename}.db' with key '{key}':")
            print(db[key])
        else:
            print(f"No data found under key '{key}'.")

print()
print("Week-7 Exp-14 , Yash Pandey 12214802722")

data_to_store = {
    'name': 'Yash Pandey',
    'age': 21,
    'skills': ['Python', 'MERN Stack', 'ML'],
    'leetcode_solved': 700
}

shelve_file = "009_user_data"
key_name = "user1"

serialize_data(shelve_file, key_name, data_to_store)
deserialize_data(shelve_file, key_name)

print()