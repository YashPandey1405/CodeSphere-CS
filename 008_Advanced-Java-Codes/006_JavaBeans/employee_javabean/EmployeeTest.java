package employee_javabean;

public class EmployeeTest {
    public static void main(String[] args) {
        // Creating an Employee Bean using the no-arg constructor
        Employee emp = new Employee();

        System.out.println();
        // Setting properties using setter methods
        emp.setEmpId(1001);
        emp.setEmpName("John Doe");
        emp.setSalary(50000);

        // Getting properties using getter methods
        System.out.println("Employee ID: " + emp.getEmpId());
        System.out.println("Employee Name: " + emp.getEmpName());
        System.out.println("Employee Salary: $" + emp.getSalary());
        
        // Displaying the employee object using toString()
        System.out.println();
        System.out.println("The Employee Details Are : "+emp);
        System.out.println();
    }
}
