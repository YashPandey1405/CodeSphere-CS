# Write a Python program to count the occurrences of each character in a string using a dictionary.

def countDictChars(str):
    dict={}
    for char in str:
        char=char.lower()
        if char==" ":
            continue
        elif char in dict:
            dict[char] += 1
        else:
            dict[char] = 1
    return dict


print("Week-4 Exp-9. , Yash Pandey 12214802722")
str=input("Enter The String : ")
print(f"The Dictionary Is : {countDictChars(str)}")