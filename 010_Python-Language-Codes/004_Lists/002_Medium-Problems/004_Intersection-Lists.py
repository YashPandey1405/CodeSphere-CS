# Write a program to check if two lists have any common elements. 

print("Week-3 Exp-9 , Yash Pandey 12214802722") 

Numbers1=[1,2,3,4,5,6]
Numbers2=[4,5,6,7,8]
ans=[]

for i in range(len(Numbers1)):
    if (Numbers1[i] in Numbers2):
        ans.append(Numbers1[i])
        Numbers2.remove(Numbers1[i])

print(f"The Intersection Of List Is : {ans}")