# Implement a function that takes a string as input, stores each unique character as a key in a dictionary 
# with its frequency as the value, and pretty-prints the dictionary. 
# Handle TypeError if input is not a string.

def count_character_frequency(input_string):
    # Check if input is a string
    if not isinstance(input_string, str):
        raise TypeError("Input must be a string.")
    
    # Create a dictionary to store character frequencies
    frequency_dict = {}
    
    # Iterate over each character in the string
    for char in input_string:
        if char in frequency_dict:
            frequency_dict[char] += 1  # Increment the frequency
        else:
            frequency_dict[char] = 1  # Initialize frequency to 1 if not present
    
    # Pretty print the dictionary
    print("Character Frequency Dictionary:")
    for char, freq in frequency_dict.items():
        print(f"'{char}': {freq}")

print()
print("Week-5 , Miscellaneous Exp-2. , Yash Pandey 12214802722")

# Example Usage:
try:
    input_string = "hello world"
    count_character_frequency(input_string)
    
    # Uncomment the below line to test invalid input
    # count_character_frequency(123)  # This will raise a TypeError
except TypeError as e:
    print(f"Error: {e}")

print()