# Combining Multiple Files
# Write a program to combine the contents of two text files into one.

def combine_files(file1, file2, output_file):
    try:
        with open(file1, 'r') as f1, open(file2, 'r') as f2, open(output_file, 'w') as out:
            out.write(f1.read())
            out.write("\n")  # Optional: Add a newline between files
            out.write(f2.read())
        print("Files combined successfully into", output_file)
    except FileNotFoundError:
        print("Error: One or both input files not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

print()
print("Week-7 Exp-6 , Yash Pandey 12214802722")
combine_files("001_InputFile.txt", "002_InputFile.txt", "003_CombinedFile.txt")
print()
