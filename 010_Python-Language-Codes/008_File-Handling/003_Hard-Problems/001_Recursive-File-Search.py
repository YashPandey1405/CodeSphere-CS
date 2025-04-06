# Recursive File Search
# Write a program to search for a file in a directory and all its subdirectories using recursion.

import os

def search_file(directory, target_file):
    found = False
    for root, dirs, files in os.walk(directory):
        if target_file in files:
            print(f"File found at: {os.path.join(root, target_file)}")
            found = True
    if not found:
        print(f"'{target_file}' not found in '{directory}' or its subdirectories.")

print()
print("Week-7 Exp-11 , Yash Pandey 12214802722")
base_directory = "."  # Current directory, can be changed
filename_to_search = "001_InptFile.txt"
search_file(base_directory, filename_to_search)
print()