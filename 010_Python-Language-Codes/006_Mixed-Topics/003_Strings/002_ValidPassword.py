# Medium: Implement a function to check whether a given string is a valid password 
# (at least 8 characters, contains digits, uppercase, lowercase, and a special character).

import re

def is_valid_password(password):
    return (len(password) >= 8 and
            re.search(r'[A-Z]', password) and    # At least one uppercase letter
            re.search(r'[a-z]', password) and    # At least one lowercase letter
            re.search(r'\d', password) and       # At least one digit
            re.search(r'[\W_]', password))      # At least one special character

# Test cases with formatted output
test_passwords = [
    "Password123!",
    "password123",
    "PASSWORD123!",
    "Pass123"
]
print()
print("Week-5 , Strings Exp-2. , Yash Pandey 12214802722")
# Print the results with formatted output
for password in test_passwords:
    result = is_valid_password(password)
    print(f"Password: '{password}' is {'valid' if result else 'invalid'}")

print()
