# WAP To Implement Bill Calculator using python....

# Number of items
print("Week-2 Exp-5 , Yash Pandey 12214802722")
num_items = int(input("Enter the number of items: "))

# Initialize total price
total_price = 0

# Input prices for each item
for i in range(num_items):
    price = float(input(f"Enter the price of item {i+1}: $"))
    total_price += price

print()
# Calculate GST (18%)
gst = (18 / 100) * total_price

# Calculate total amount including GST
total_amount = total_price + gst

# Display the total amount
print(f"Total price of items: ${total_price}")
print(f"GST (18%): ${gst:.2f}")
print(f"Total amount including GST: ${total_amount}")
