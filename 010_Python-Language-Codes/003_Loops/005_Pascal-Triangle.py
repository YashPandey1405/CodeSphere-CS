# Print The Pascal Triangle....

print("Week-2 Exp-12 , Yash Pandey 12214802722")
num=int(input("Enter The Number : "))

# Using For Loop...
print("Pascal's Triangle Using For Loop")
for row in range(1,num+1):
    for i in range(1,num-row+1):
        print(" ",end=" ")
    for i in range(1,row+1):
        print(i,end=" ")
    for i in reversed(range(1,row)):
        print(i,end=" ")
    print()

print()

# Using While Loop...
print("Pascal's Triangle While For Loop")
row = 1
while row <= num:
    i = 1
    while i <= num - row:
        print(" ", end=" ")
        i += 1
    
    i = 1
    while i <= row:
        print(i, end=" ")
        i += 1
    
    i = row - 1
    while i >= 1:
        print(i, end=" ")
        i -= 1
    
    print()
    row += 1
