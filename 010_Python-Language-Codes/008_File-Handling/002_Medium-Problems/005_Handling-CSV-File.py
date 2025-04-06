# Reading and Writing CSV Files
# Write a program to read from and write to a CSV file using Python's csv module.
import csv

def write_to_csv(filename, data, header):
    try:
        with open(filename, 'w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(header)
            writer.writerows(data)
        print(f"Data written successfully to '{filename}'")
    except Exception as e:
        print(f"Error writing to CSV: {e}")

def read_from_csv(filename):
    try:
        print(f"\nReading data from '{filename}':\n")
        with open(filename, 'r') as file:
            reader = csv.reader(file)
            for row in reader:
                print(row)
    except FileNotFoundError:
        print(f"Error: File '{filename}' not found.")
    except Exception as e:
        print(f"Error reading from CSV: {e}")

print()
print("Week-7 Exp-10 , Yash Pandey 12214802722")
csv_filename = "006_StudentData.csv"
csv_header = ["Name", "Age", "Department"]
csv_data = [
    ["Yash", 21, "CSE"],
    ["Divyam", 20, "CSE"],
    ["Amit", 20, "CSE"],
    ["Shaswat", 21, "CSE"]
]

write_to_csv(csv_filename, csv_data, csv_header)
read_from_csv(csv_filename)
print()