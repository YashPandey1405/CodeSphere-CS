# Print The Sum Of Numbers From 0 To Number Entered By User....

print("Week-2 Exp-9 , Yash Pandey 12214802722")
num=int(input("Enter The Number : "))

# Using For Loop
print("Using For Loop , The Sum Is : ",end=" ")
ans=0
for i in range(num+1):
    ans+=i
print(ans,end=" ")

print()

# Using While Loop
print("Using While Loop , The Sum Is : ",end=" ")
ans=0
i=0
while(i<(num+1)):
    ans += i
    i+=1
print(ans,end=" ")