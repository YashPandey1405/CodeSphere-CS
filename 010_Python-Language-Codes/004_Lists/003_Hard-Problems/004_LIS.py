# Function to find the longest increasing subsequence
def longest_increasing_subsequence(nums):
    if not nums:
        return []
    
    # Create an array to store the length of LIS ending at each index
    dp = [1] * len(nums)
    
    # Calculate the length of LIS for each element
    for i in range(1, len(nums)):
        for j in range(i):
            if nums[i] > nums[j]:
                dp[i] = max(dp[i], dp[j] + 1)
    
    # Reconstruct the longest increasing subsequence
    lis_length = max(dp)
    lis = []
    i = len(nums) - 1
    while i >= 0:
        if dp[i] == lis_length:
            lis.insert(0, nums[i])
            lis_length -= 1
        i -= 1
    
    return lis

# Program to find the longest increasing subsequence
print("Week-3 Exp-13 , Yash Pandey 12214802722")

numbers = [10, 22, 9, 33, 21, 50, 41, 60, 80]

# Find the longest increasing subsequence
lis = longest_increasing_subsequence(numbers)

# Output the result
print(f"The longest increasing subsequence is: {lis}")
