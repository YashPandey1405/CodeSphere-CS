# File input/output: Create a program that reads data from a file and writes 
# it to another file in a different format.

# Read from input file
with open("Input_Program8.txt", "r") as infile:
    data = infile.read()

# Process data into a structured format
words = data.split()
formatted_data = {
    "Name": words[0] + " " + words[1],
    "Year": words[3],
    "Course": words[4] + " " + words[5],
    "Institution": words[8]
}

# Write to output file
with open("output_Program8.txt", "w") as outfile:
    for key, value in formatted_data.items():
        outfile.write(f"{key}: {value}\n")

print()
print("Week-6 Exp-8 , Yash Pandey - 12214802722")
print("Data successfully written to output.txt")
print()