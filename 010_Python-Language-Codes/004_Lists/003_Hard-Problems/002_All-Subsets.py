# Program to find all subsets of a given list

def subsets(nums):
    result = []
    def backtrack(start, current_subset):
        result.append(current_subset[:])  # Add the current subset to the result
        for i in range(start, len(nums)):
            current_subset.append(nums[i])  # Add the element to the current subset
            backtrack(i + 1, current_subset)  # Recurse with the next element
            current_subset.pop()  # Backtrack by removing the last element

    backtrack(0, [])  # Start the recursion with an empty subset
    return result

print("Week-3 Exp-12 , Yash Pandey 12214802722") 

Numbers = [1, 2, 3, 4, 5]

# Find all subsets
all_subsets = subsets(Numbers)

# Output the result
print(f"All subsets are : {all_subsets}")
