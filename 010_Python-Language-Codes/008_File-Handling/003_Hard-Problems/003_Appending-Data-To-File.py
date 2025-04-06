# Appending Data to a File Using os.path
# Write a program that appends data to a file and checks if the file exists using os.path.

import os

def append_to_file(file_path, data):
    if os.path.exists(file_path):
        mode = 'a'  # Append mode
        print(f"File '{file_path}' exists. Appending data...")
    else:
        mode = 'w'  # Create and write
        print(f"File '{file_path}' does not exist. Creating and writing data...")

    try:
        with open(file_path, mode) as file:
            file.write(data + '\n')
        print("Data written successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-13 , Yash Pandey 12214802722")

file_name = "003_InptFile.txt"
text_to_append = "This is an appended line by Yash Pandey."

append_to_file(file_name, text_to_append)
print()