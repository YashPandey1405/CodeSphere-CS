package employee_javabean;

import java.io.Serializable;

public class Employee implements Serializable {
    private static final long serialVersionUID = 1L; 

    private int empId;
    private String empName;
    private double salary;

    // No-argument constructor (mandatory for Java Beans)
    public Employee() {}

    // Getters and Setters
    public int getEmpId() {
        return empId;
    }

    public void setEmpId(int empId) {
        this.empId = empId;
    }

    public String getEmpName() {
        return empName;
    }

    public void setEmpName(String empName) {
        this.empName = empName;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        if (salary > 0) {
            this.salary = salary;
        } else {
            System.out.println("Salary must be positive.");
        }
    }

    @Override
    public String toString() {
        return "Employee [ID=" + empId + ", Name=" + empName + ", Salary=" + salary + "]";
    }
}

