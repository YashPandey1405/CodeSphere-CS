import shutil
import os

# Define source and destination paths
source_file = 'Python/input.txt'
destination_folder = 'Python/Temp'

# Ensure destination folder exists
os.makedirs(destination_folder, exist_ok=True)

try:
    shutil.copy(source_file, destination_folder)
    print(f"File copied successfully from {source_file} to {destination_folder}")
except FileNotFoundError:
    print("Source file not found. Please check the path.")
except Exception as e:
    print(f"An error occurred: {e}")
