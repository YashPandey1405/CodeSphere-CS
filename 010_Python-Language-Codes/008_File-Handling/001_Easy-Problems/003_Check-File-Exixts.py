# Checking if a File Exists
# Write a program to check if a file exists.

def check_file(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
            print(f"The File {file_path} Exists In The Directory")
            print(f"The Content Of The File {file_path} Is : {content}")
    except FileNotFoundError:
        print("Error: File not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-3 , Yash Pandey 12214802722")
check_file("003_InputFile.txt")
print()