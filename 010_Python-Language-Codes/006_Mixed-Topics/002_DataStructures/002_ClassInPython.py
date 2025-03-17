# Medium: Design an Employee class with attributes name, ID, and salary, and a method to give a percentage-based salary increment...

class Employee:
    def __init__(self, name, emp_id, salary):
        self.name = name
        self.emp_id = emp_id
        self.salary = salary

    def give_increment(self, percentage):
        # Calculate the incremented salary
        increment = (self.salary * percentage) / 100
        self.salary += increment
        print(f"Salary updated for {self.name} ({self.emp_id}): {self.salary:.2f}")

    def display_details(self):
        print(f"Employee Details: Name: {self.name}, ID: {self.emp_id}, Salary: {self.salary:.2f}")


# Creating an instance of the Employee class
employee1 = Employee("Yash Pandey", "E12345", 50000)

print()
print("Week-5 , Data Structures Exp-2. , Yash Pandey 12214802722")

# Displaying the initial details
employee1.display_details()

# Giving a 10% salary increment
employee1.give_increment(20)

print()