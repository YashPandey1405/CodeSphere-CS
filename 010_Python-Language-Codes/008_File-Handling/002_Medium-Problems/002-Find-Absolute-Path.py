# Finding the File Path
# Write a program that finds the absolute file path using os.path.

import os

def get_absolute_path(file_name):
    try:
        abs_path = os.path.abspath(file_name)
        print(f"Absolute path of '{file_name}':\n{abs_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-7 , Yash Pandey 12214802722")
file_name = "002_InputFile.txt"  
get_absolute_path(file_name)
print()
