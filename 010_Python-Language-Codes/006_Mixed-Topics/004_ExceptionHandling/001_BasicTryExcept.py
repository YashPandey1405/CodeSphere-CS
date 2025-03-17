# Easy: Write a Python program that handles ZeroDivisionError and prompts the user to enter a valid denominator.

def divide(numerator, denominator):
    try:
        # Attempt to perform the division
        result = numerator / denominator
        return result
    except ZeroDivisionError:
        # If the denominator is zero, return an error message
        return "Error: Denominator cannot be zero. Please enter a valid denominator."
    except ValueError:
        # If the input values are invalid, return an error message
        return "Error: Please enter valid numbers for numerator and denominator."

print()
print("Week-5 , Exception Handling Exp-1. , Yash Pandey 12214802722")
# Example Usage:
numerator = 10
denominator = 0
print(divide(numerator, denominator))  # Error: Denominator cannot be zero.

numerator = 10
denominator = 2
print(divide(numerator, denominator))  # The result of 10 / 2 is: 5.0
print()
