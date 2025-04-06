# Copying Files and Directories
# Write a program that copies a file from one location to another, including directories.

import shutil

def copy_file(src_file, dest_file):
    try:
        shutil.copy2(src_file, dest_file)  # copy2 preserves metadata
        print(f"File copied from '{src_file}' to '{dest_file}'")
    except FileNotFoundError:
        print(f"Error: Source file '{src_file}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-12 , Yash Pandey 12214802722")

source_file = "001_InptFile.txt"          # Replace with your file
destination_file = "002_InptFile.txt"  # New file name/location

copy_file(source_file, destination_file)

print()