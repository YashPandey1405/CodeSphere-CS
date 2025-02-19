# Write a Python program to find the key with the maximum value in a dictionary.

dict={
    "apple": 5,
    "banana": 10,
    "cherry": 15,
    "grapes": 20
}
print("Week-4 Exp-8. , Yash Pandey 12214802722")
key=""
min=-1

for item in dict:
    if dict[item]>min:
        min=dict[item]
        key=item

print(f"The Key With Max. value Is {key} With Value {dict[key]}")