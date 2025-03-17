# Easy: Write a Python program to reverse each word in a given string while maintaining the word order...

text = "Yash Pandey Is 3rd Year Btech Student"

# Split the string into words
words = text.split()

# Reverse each word and store in a list
reversed_words = [word[::-1] for word in words]

# Join the reversed words back into a string
reversed_text = " ".join(reversed_words)

print()
print("Week-5 , Strings Exp-1. , Yash Pandey 12214802722")
print(f"The Orignal String Is : {text}")
print(f"The Reversed String is : {reversed_text}")
print()
