import os

def list_txt_files(directory):
    for dirpath, _, filenames in os.walk(directory):
        for file in filenames:
            if file.endswith('.txt'):
                print(os.path.join(dirpath, file))

# Replace with your target directory
list_txt_files('your_directory_path')
