# 💻 Advanced Java Lab – 09-04-2025

## 📂 Topic: JSP Using JavaBeans

This lab contains 3 basic JSP applications demonstrating the use of **JavaBeans** for business logic and JSP for user interaction.

---

###  Q1: User Login Using JSP and JavaBeans

**Objective**:  
Validate user credentials using a JavaBean.

**Features**:
- JSP form to input username and password.
- JavaBean with properties and `validate()` method (hardcoded login: `admin/admin123`).
- Displays welcome message on success or error message on failure.

---

###  Q2: Simple Interest Calculator

**Objective**:  
Calculate simple interest from user input.

**Features**:
- JSP form to input: Principal, Rate, and Time.
- JavaBean method `calculateInterest()` using the formula:  
- Displays the interest on a result JSP page.

---

###  Q3: Student Marks & Grade Calculator

**Objective**:  
Calculate total, average, and grade based on subject marks.

**Features**:
- JSP form to input marks of 5 subjects.
- JavaBean methods to compute:
  - Total marks
  - Average marks
  - Grade (A ≥ 90, B ≥ 75, C ≥ 60, D ≥ 40, F < 40)
- Output summary on result page.
