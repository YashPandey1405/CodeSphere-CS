import zipfile
import os

# List of files to be compressed
files_to_zip = [
    'file1.txt',
    'file2.txt',
    'image1.png'
]

# Name of the output zip file
zip_filename = 'compressed_files.zip'

# Create a ZIP file and add files to it
with zipfile.ZipFile(zip_filename, 'w') as zipf:
    for file in files_to_zip:
        if os.path.exists(file):
            zipf.write(file, arcname=os.path.basename(file))
            print(f"Added {file} to {zip_filename}")
        else:
            print(f"File not found: {file}")

print(f"\nSuccessfully created {zip_filename}")
