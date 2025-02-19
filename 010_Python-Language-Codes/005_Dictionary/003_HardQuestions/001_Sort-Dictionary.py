# Write a Python program to sort a dictionary by its values in ascending and descending order.

def sort_dict_by_value(d, ascending=True):
    return dict(sorted(d.items(), key=lambda item: item[1], reverse=not ascending))

print("Week-4 Exp-11. , Yash Pandey 12214802722")
data = {'apple': 3, 'banana': 1, 'cherry': 5, 'date': 2}

# Sorting in ascending order
ascending_sorted = sort_dict_by_value(data, ascending=True)
print("Ascending order:", ascending_sorted)

# Sorting in descending order
descending_sorted = sort_dict_by_value(data, ascending=False)
print("Descending order:", descending_sorted)

