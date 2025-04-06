# Saving a List to a File (Using pprint)
# Write a program to save a list to a file using the pprint module.

import pprint

def save_list_to_file(file_path, data_list):
    try:
        with open(file_path, 'w') as file:
            pprint.pprint(data_list, stream=file)
        print("List saved to file successfully using pprint.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-4 , Yash Pandey 12214802722")
file_path = "004_ListOutput.txt"
sample_list = [
    {'name': 'Yash', 'age': 21, 'hobbies': ['coding', 'cricket']},
    {'name': 'Divyam', 'age': 20, 'hobbies': ['cricket', 'chill']}
]

save_list_to_file(file_path, sample_list)
print()