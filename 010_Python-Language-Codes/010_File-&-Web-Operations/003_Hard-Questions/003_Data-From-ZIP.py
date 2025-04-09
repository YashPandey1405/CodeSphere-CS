import zipfile

existing_zip = 'archive.zip'
files_to_add = ['newfile1.txt', 'newfile2.txt']

with zipfile.ZipFile(existing_zip, 'a') as zipf:
    for file in files_to_add:
        zipf.write(file)
        print(f"Appended: {file}")

print(f"Files appended to {existing_zip}")
