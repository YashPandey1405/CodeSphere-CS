import os

def display_directory_tree(root_dir):
    for dirpath, dirnames, filenames in os.walk(root_dir):
        level = dirpath.replace(root_dir, '').count(os.sep)
        indent = ' ' * 4 * level
        print(f"{indent}{os.path.basename(dirpath)}/")
        sub_indent = ' ' * 4 * (level + 1)
        for filename in filenames:
            print(f"{sub_indent}{filename}")

# Replace with your target directory
display_directory_tree('your_directory_path')
