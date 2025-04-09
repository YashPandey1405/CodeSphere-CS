import shutil
import os

source_folder = 'Python-Work'
destination_folder = 'Temp'

os.makedirs(destination_folder, exist_ok=True)

for filename in os.listdir(source_folder):
    source_path = os.path.join(source_folder, filename)
    destination_path = os.path.join(destination_folder, filename)
    if os.path.isfile(source_path):
        shutil.move(source_path, destination_path)
        print(f"Moved: {filename}")
