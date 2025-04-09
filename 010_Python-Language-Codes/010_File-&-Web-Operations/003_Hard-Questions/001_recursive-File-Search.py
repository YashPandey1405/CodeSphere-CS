import os

def find_file_recursive(directory, target_filename):
    for root, dirs, files in os.walk(directory):
        if target_filename in files:
            return os.path.join(root, target_filename)
        for d in dirs:
            result = find_file_recursive(os.path.join(root, d), target_filename)
            if result:
                return result
    return None

# Usage
file_path = find_file_recursive('your_directory', 'target_file.txt')
if file_path:
    print(f"File found at: {file_path}")
else:
    print("File not found.")
