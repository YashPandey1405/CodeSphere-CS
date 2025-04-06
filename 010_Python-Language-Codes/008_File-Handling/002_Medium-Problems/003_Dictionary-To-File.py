# Writing a Dictionary to a File (Using shelve Module)
# Write a program to save a dictionary using the shelve module and then read it back.

import shelve

def save_dictionary(filename, data):
    with shelve.open(filename) as db:
        db['my_dict'] = data
    print("Dictionary saved using shelve.")

def read_dictionary(filename):
    with shelve.open(filename) as db:
        my_dict = db['my_dict']
        print("Dictionary read from shelve:\n")
        print(my_dict)

print()
print("Week-7 Exp-8 , Yash Pandey 12214802722")
file_name = "004_ShelveData"
sample_dict = {
    'name': 'Yash Pandey',
    'age': 21,
    'skills': ['Python', 'MERN', 'ML'],
    'college': 'MAIT'
}

save_dictionary(file_name, sample_dict)
read_dictionary(file_name)
print()
