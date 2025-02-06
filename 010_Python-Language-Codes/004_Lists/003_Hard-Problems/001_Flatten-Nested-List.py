# Program to flatten a nested list

def flatten(nested_list):
    flattened_list = []
    for item in nested_list:
        if isinstance(item, list):  # Check if the item is a list
            flattened_list.extend(flatten(item))  # Recursively flatten the sublist
        else:
            flattened_list.append(item)  # Append the item if it's not a list
    return flattened_list


print("Week-3 Exp-11 , Yash Pandey 12214802722") 

# Example nested list
nested_list = [[1, 2], [3, [4, 5]]]

# Flatten the nested list
flattened_list = flatten(nested_list)

# Output the result
print(f"The Flattened list : {flattened_list}")
