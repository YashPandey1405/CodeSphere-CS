# Question 3: Develop a Student class with attributes name and marks (list). 
# Implement methods to calculate the average marks and format the output using pretty printing. 
# Handle ValueError if marks contain invalid data.

class Student:
    def __init__(self, name, marks):
        self.name = name
        # Validate and assign marks
        self.set_marks(marks)
    
    def set_marks(self, marks):
        """Setter method to ensure all marks are valid (non-negative numbers)."""
        if not all(isinstance(mark, (int, float)) and mark >= 0 for mark in marks):
            raise ValueError("Marks must be a list of non-negative numbers.")
        self.marks = marks
    
    def calculate_average(self):
        """Calculate the average of the marks."""
        return sum(self.marks) / len(self.marks) if self.marks else 0
    
    def __str__(self):
        """Pretty print the student's details."""
        average = self.calculate_average()
        return f"Student: {self.name}, Average Marks: {average:.2f}"

print()
print("Week-5 , Miscellaneous Exp-3. , Yash Pandey 12214802722")
# Example Usage
try:
    # Create student objects
    student1 = Student("Alice", [85, 90, 78, 92])
    student2 = Student("Bob", [70, 60, 65, 80, 75])
    
    # Uncomment the below line to test invalid marks (e.g., negative value or non-number)
    # student3 = Student("Charlie", [88, -90, 72, "N/A"])  # This will raise a ValueError
    
    # Pretty print the student details
    print(student1)
    print(student2)

except ValueError as e:
    print(f"Error: {e}")

print()