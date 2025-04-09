import os

base_dir = 'project_dir'
subdirs = ['docs', 'src', 'data']

for subdir in subdirs:
    path = os.path.join(base_dir, subdir)
    os.makedirs(path, exist_ok=True)
    with open(os.path.join(path, f'{subdir}_file.txt'), 'w') as f:
        f.write(f"This is a sample file in {subdir} directory.")
        print(f"Created file in: {path}")
