# Reading a File Line by Line
# Write a program to read a file line by line and print each line.
# Program to read a file line by line and print each line

def read_file_line_by_line(file_path):
    try:
        with open(file_path, 'r') as file:
            print("File Content (Line by Line):\n")
            for line in file:
                print(line.strip())  # .strip() removes leading/trailing whitespace
    except FileNotFoundError:
        print("Error: File not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-5 , Yash Pandey 12214802722")
file_path = "005_InputFile.txt"  
read_file_line_by_line(file_path)
print()
