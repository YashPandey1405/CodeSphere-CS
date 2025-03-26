# Regular expressions: Create a program that uses regular expressions to find all instances 
# of a specific pattern in a text file.

import re

# Define the pattern (example: finding years in the text)
pattern = r"\b\d{4}\b"  # Matches any 4-digit number (e.g., a year)

# Read from input file
with open("Input_Program9.txt", "r") as infile:
    text = infile.read()

# Find all matches
matches = re.findall(pattern, text)

# Write matches to output file
with open("Output_Program9.txt", "w") as outfile:
    for match in matches:
        outfile.write(match + "\n")

print()
print("Week-6 Exp-9 , Yash Pandey - 12214802722")
print("Matching patterns written to Output_Program9.txt")
print()
