# Write a program to calculate the sum and average of all elements in a list.

print("Week-3 Exp-2 , Yash Pandey 12214802722")
Numbers=[2,3,4,5,1,6,8,9,7]
sum=0

for i in range(len(Numbers)):
    sum=sum+Numbers[i]


print(f"In {Numbers} , Sum Of All Elements Is {sum}")
print(f"In {Numbers} , Average Of Elements Is {sum/len(Numbers)}")