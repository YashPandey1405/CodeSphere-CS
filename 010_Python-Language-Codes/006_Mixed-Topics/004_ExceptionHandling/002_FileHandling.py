# Medium: Implement a function that opens a file and handles FileNotFoundError if the file does not exist.

def open_file(file_name):
    try:
        # Attempt to open the file
        with open(file_name, 'r') as file:
            # Read the contents of the file
            content = file.read()
            print("File content:")
            print(content)
    except FileNotFoundError:
        # Handle the case where the file is not found
        print(f"Error: The file '{file_name}' does not exist.")
    except Exception as e:
        # Handle any other unexpected errors
        print(f"An unexpected error occurred: {e}")

# Example usage:
print()
print("Week-5 , Exception Handling Exp-2. , Yash Pandey 12214802722")
file_name = "non_existent_file.txt"
open_file(file_name)  # This will trigger FileNotFoundError

file_name = "existing_file.txt"
open_file(file_name)  # Replace with a valid file name to test reading

print()