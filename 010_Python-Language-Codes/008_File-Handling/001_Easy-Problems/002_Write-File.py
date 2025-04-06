# Writing to a File
# Write a program to write content to a file.

def write_to_file(file_path, content):
    try:
        with open(file_path, 'w') as file:
            file.write(content)
        print("Content written to file successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-2 , Yash Pandey 12214802722")
file_path = "002_OutputFile.txt"
content = "Yash Pandey Is 3rd Year Btech Student At MAIT"
write_to_file(file_path, content)
print() 