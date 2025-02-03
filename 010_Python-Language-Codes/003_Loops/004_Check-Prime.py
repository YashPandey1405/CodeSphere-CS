# Check Whether the Number is Prime Or Not....

print("Week-2 Exp-11 , Yash Pandey 12214802722")
num=int(input("Enter The Number : "))

print()
# Using For Loop....
print(f"Using For Loop : ",end=" ")
for i in range(2,num):
    if(num%i==0):
        print(f"{num} is Not a Prime Number")
        break
    elif(i==num-1):
        print(f"{num} is an Prime Number")



# Using While Loop....
print(f"Using While Loop : ",end=" ")
i=2
while(i<(num)):
    if(num%i==0):
        print(f"{num} is Not a Prime Number")
        break
    elif(i==num-1):
        print(f"{num} is an Prime Number")
    i+=1
    