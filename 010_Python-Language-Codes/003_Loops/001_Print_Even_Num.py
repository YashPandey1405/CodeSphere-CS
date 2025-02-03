# Print The Even numbers From 0 To Number Entered By User....

print("Week-2 Exp-8 , Yash Pandey 12214802722")
num=int(input("Enter The Number : "))

# Using For Loop
print("Using For Loop , Even Numbers Are : ",end=" ")
for i in range(num+1):
    if i%2==0:
        print(i,end=" ")

print()

# Using While Loop
print("Using While Loop , Even Numbers Are : ",end=" ")
i=0
while(i<(num+1)):
    if i%2==0:
        print(i,end=" ")
    i+=1