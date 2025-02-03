# WAP To Implement Grade Classification...

# Function to classify grade
def Grades(marks):
    if marks >= 90:
        return "A+"
    elif marks >= 80:
        return "A"
    elif marks >= 70:
        return "B+"
    elif marks >= 60:
        return "B"
    elif marks >= 50:
        return "C+"
    elif marks >= 40:
        return "C"
    else:
        return "F"  # Fail

print("Week-2 Exp-2 , Yash Pandey 12214802722")
# Input marks from the user
name=input("Enter Your Name : ")
OS_marks = int(input("Enter Your Operating Systems Marks : "))
CN_marks = int(input("Enter Your Computer Networks Marks : "))
DAA_marks = int(input("Enter Your DAA Marks : "))
CD_marks = int(input("Enter Your Compiler Design Marks : "))
SE_marks = int(input("Enter Your Software Engg. Marks : "))
print()

# # Ensure marks are within a valid range
# if marks < 0 or marks > 100:
#     print("Invalid marks! Please enter marks between 0 and 100.")

print(f"{name} , You Got '{Grades(OS_marks)}' Grade In Operating Systems")
print(f"{name} , You Got '{Grades(CN_marks)}' Grade In Computer Networks")
print(f"{name} , You Got '{Grades(DAA_marks)}' Grade In DAA")
print(f"{name} , You Got '{Grades(CD_marks)}' Grade In Compiler Design")
print(f"{name} , You Got '{Grades(SE_marks)}' Grade In Software Engg.\n")
overall=(OS_marks+CN_marks+DAA_marks+CD_marks+SE_marks)/5
print(f"{name} , Your Overall Sem-Grade is : {Grades(overall)}")
