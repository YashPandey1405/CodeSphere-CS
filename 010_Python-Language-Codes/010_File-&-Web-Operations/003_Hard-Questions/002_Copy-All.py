import shutil
import os

source_dir = 'source_folder'
destination_dir = 'backup_folder'

# Make sure destination does not already exist
if os.path.exists(destination_dir):
    print("Destination already exists. Please delete it or use a different name.")
else:
    shutil.copytree(source_dir, destination_dir)
    print(f"Copied '{source_dir}' to '{destination_dir}'")
