# Functions: Create a program that defines a function to calculate the area of a circle 
# based on the radius entered by the user.

def circleArea(r):
    area = 3.14 * (r ** 2)
    print(f"The Area Of Circle Is : {area}")

print()
print("Week-6 Exp-6 , Yash Pandey - 12214802722")
radius = float(input("Enter the radius of the circle: "))
circleArea(radius)  
print()