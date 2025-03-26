# Exception handling: Create a program that prompts the user for two numbers and 
# then divides them, handling any exceptions that may arise

def divide_numbers():
    try:
        num1 = float(input("Enter the numerator: "))
        num2 = float(input("Enter the denominator: "))

        result = num1 / num2  # Perform division
        print(f"Result: {result}")

    except ValueError:
        print("Error: Please enter valid numeric values.")

    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")

    except Exception as e:
        print(f"Unexpected error: {e}")

# Run the function
print()
print("Week-6 Exp-10 , Yash Pandey - 12214802722")
divide_numbers()
print()

