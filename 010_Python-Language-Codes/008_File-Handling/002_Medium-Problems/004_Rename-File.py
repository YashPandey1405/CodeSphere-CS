# Renaming a File
# Write a program that renames a file using the os module.

import os

def rename_file(old_name, new_name):
    try:
        os.rename(old_name, new_name)
        print(f"File renamed successfully from '{old_name}' to '{new_name}'.")
    except FileNotFoundError:
        print(f"Error: The file '{old_name}' does not exist.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-9 , Yash Pandey 12214802722")
old_file_name = "005_InputFile.txt"       # Replace with your existing file
new_file_name = "005_NewTextFile.txt"     # New file name

rename_file(old_file_name, new_file_name)

print()
