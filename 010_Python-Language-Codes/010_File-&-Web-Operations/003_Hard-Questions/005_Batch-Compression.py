import os
import zipfile

root_dir = 'your_directory'

for dirpath, dirnames, filenames in os.walk(root_dir):
    txt_files = [f for f in filenames if f.endswith('.txt')]
    if txt_files:
        zip_name = os.path.basename(dirpath) or "root"
        zip_path = os.path.join(dirpath, f'{zip_name}_txts.zip')
        with zipfile.ZipFile(zip_path, 'w') as zipf:
            for file in txt_files:
                full_path = os.path.join(dirpath, file)
                zipf.write(full_path, arcname=file)
                print(f"Compressed: {file} into {zip_path}")
