# File Size Calculation
# Write a program that calculates and prints the size of a file using os.path and os module.

# Program to calculate and print the size of a file using os and os.path

import os

def get_file_size(file_path):
    if os.path.exists(file_path):
        size_bytes = os.path.getsize(file_path)
        size_kb = size_bytes / 1024
        print(f"File: {file_path}")
        print(f"Size: {size_bytes} bytes ({size_kb:.2f} KB)")
    else:
        print(f"Error: File '{file_path}' does not exist.")

print()
print("Week-7 Exp-15 , Yash Pandey 12214802722")

file_to_check = "003_InptFile.txt"  # Replace with your actual file
get_file_size(file_to_check)
print()