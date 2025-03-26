# Classes and objects: Create a program that defines a class to represent a car 
# and then creates an object of that class with specific attributes.

class Car:
    def __init__(self, brand, model, year, color):
        self.brand = brand
        self.model = model
        self.year = year
        self.color = color

    def display_info(self):
        print(f"Car Details: {self.year} {self.color} {self.brand} {self.model}")

# Creating an object of the Car class
print()
my_car = Car("Toyota", "Corolla", 2022, "Blue")
print("Week-6 Exp-7 , Yash Pandey - 12214802722")
my_car.display_info()
print()
