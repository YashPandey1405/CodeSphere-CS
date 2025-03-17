# Easy: Create a Car class with attributes brand, model, and year. Implement a method to display car details.

class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def display_details(self):
        print(f"Car Details: {self.year} {self.brand} {self.model}")

# Creating an instance of the Car class
my_car = Car("Toyota", "Corolla", 2020)

# Displaying the car details
print()
print("Week-5 , Data Structures Exp-1. , Yash Pandey 12214802722")
my_car.display_details()
print()
