import os
import zipfile

source_dir = 'your_directory'
zip_filename = 'all_txt_files.zip'

with zipfile.ZipFile(zip_filename, 'w') as zipf:
    for dirpath, _, filenames in os.walk(source_dir):
        for file in filenames:
            if file.endswith('.txt'):
                filepath = os.path.join(dirpath, file)
                zipf.write(filepath, arcname=os.path.relpath(filepath, start=source_dir))
                print(f"Added: {filepath}")
