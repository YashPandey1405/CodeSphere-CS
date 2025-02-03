# WAP To Generate The Factorial Of A Number....

print("Week-2 Exp-10 , Yash Pandey 12214802722")
num=int(input("Enter The Number : "))
ans=1

print()
# Using For Loop....
for i in range(1,num+1):
    ans=ans*i
print(f"Using For Loop : The Factorial Of {num} is : {ans}")


# Using While Loop....
ans=1
i=1
while(i<(num+1)):
    ans=ans*i
    i+=1
    
print(f"Using While Loop : The Factorial Of {num} is : {ans}")