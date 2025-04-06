# Reading a File and Displaying Content
# Write a program to read a file and display its content.

def read_file(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
            print("File Content:")
            print(content)
    except FileNotFoundError:
        print("Error: File not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-1 , Yash Pandey 12214802722")
read_file("001_InputFile.txt")
print()