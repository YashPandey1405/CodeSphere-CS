# Create a Product class with attributes name, price, and quantity. 
# Handle exceptions when setting the price (it must be positive) and use pretty printing to display multiple products.

class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.set_price(price)  # Use setter to ensure price is valid
        self.quantity = quantity

    def set_price(self, price):
        """Setter method to ensure price is positive."""
        if price <= 0:
            raise ValueError("Price must be positive.")
        self.price = price

    def __str__(self):
        """String representation for pretty-printing."""
        return f"Product: {self.name}, Price: ${self.price:.2f}, Quantity: {self.quantity}"

def display_products(products):
    """Pretty print multiple products."""
    print("Product List:")
    for product in products:
        print(product)

# Example Usage
try:
    product1 = Product("Laptop", 1000, 5)
    product2 = Product("Smartphone", 800, 10)
    product3 = Product("Tablet", -50, 2)  # This will raise an exception
except ValueError as e:
    print(f"Error: {e}")

# Display products if no exception was raised
print()
print("Week-5 , Miscellaneous Exp-1. , Yash Pandey 12214802722")
products = [product1, product2]
display_products(products)
print()
