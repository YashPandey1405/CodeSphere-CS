# WAP to check the type of triangle....

def check_triangle_type(a, b, c):
    # Check if the sides form a valid triangle
    if a + b > c and a + c > b and b + c > a:
        if a == b == c:
            return "Equilateral Triangle"  # All sides are equal
        elif a == b or b == c or a == c:
            return "Isosceles Triangle"  # Two sides are equal
        else:
            return "Scalene Triangle"  # All sides are different
    else:
        return "Not a valid triangle"  # Not a valid triangle

# Input lengths of the sides
print("Week-2 Exp-4 , Yash Pandey 12214802722")
a = float(input("Enter the length of side a: "))
b = float(input("Enter the length of side b: "))
c = float(input("Enter the length of side c: "))
print()
# Check and display the triangle type
result = check_triangle_type(a, b, c)
print(result)
