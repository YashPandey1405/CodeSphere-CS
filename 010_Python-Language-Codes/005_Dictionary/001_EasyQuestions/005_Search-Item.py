# Write a Python program to check if a key exists in a dictionary.

dict={
    "name": "Yash Pandey",
    "age": 21,
    "city": "New Delhi"
}

print("Week-4 Exp-5. , Yash Pandey 12214802722")
key=input("Enter The Key To Be Searched : ")
print(f"The Value At Key '{key}' Is : {dict.get(key)}")