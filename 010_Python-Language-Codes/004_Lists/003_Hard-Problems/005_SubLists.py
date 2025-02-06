# Function to partition a list into sublists of specified length
def partition_list(nums, length):
    return [nums[i:i + length] for i in range(0, len(nums), length)]

# Program to partition a list into sublists of specified length
print("Week-3 Exp-13 , Yash Pandey 12214802722")

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
sublist_length = 3

# Partition the list
partitioned_list = partition_list(numbers, sublist_length)

# Output the result
print(f"The list {numbers} partitioned into sublists of length {sublist_length} is: {partitioned_list}")
