# Medium: Format and pretty-print a table displaying student names and marks using string formatting....

# List of dictionaries containing student names and marks
students = [
    {"name": "Alice", "marks": 85},
    {"name": "Bob", "marks": 92},
    {"name": "Charlie", "marks": 78},
    {"name": "David", "marks": 88}
]
print()
print("Week-5 , Preety Print Exp-2. , Yash Pandey 12214802722")

# Print the header for the table
print(f"{'Name':<10} {'Marks':<10}")
print("-" * 20)

# Print the student names and marks in a formatted table
for student in students:
    print(f"{student['name']:<10} {student['marks']:<10}")

# the formatting ':<10' ensures that the string is left-aligned with a minimum width of 10 characters.....
print()
