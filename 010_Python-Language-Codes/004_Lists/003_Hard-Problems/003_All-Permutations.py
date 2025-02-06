# Program to generate all permutations of a list

def permute(nums):
    result = []
    
    # Base case: if the list has only one element, return it as the only permutation
    if len(nums) == 1:
        return [nums]
    
    # Iterate through each element and generate permutations
    for i in range(len(nums)):
        # Get the current element
        current_element = nums[i]
        
        # Get the remaining elements
        remaining_elements = nums[:i] + nums[i+1:]
        
        # Recursively generate permutations of the remaining elements
        for perm in permute(remaining_elements):
            result.append([current_element] + perm)
    
    return result

print("Week-3 Exp-13 , Yash Pandey 12214802722")

Numbers = [1, 2, 3]

# Generate all permutations using the recursive function
permutations = permute(Numbers)

# Output the result
print(f"All permutations of {Numbers} are: {permutations}")
