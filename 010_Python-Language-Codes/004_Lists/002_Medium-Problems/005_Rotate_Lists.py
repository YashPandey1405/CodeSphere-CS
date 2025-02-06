# Write a Python program to rotate a list to the right by a given number of positions.

print("Week-3 Exp-10 , Yash Pandey 12214802722") 
Numbers=[2, 3, 4, 5, 1, 3]

rotate=int(input(f"Select Rotate Index b/w 0 To {len(Numbers)-1} : "))

for i in range(rotate):
    Numbers.append(Numbers.pop(0))

print(f"The Rotated List wrt Index-{rotate} Is : {Numbers}")