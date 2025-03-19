package student_javabean;

public class StudentTest {
    public static void main(String[] args) {
        System.out.println();
        // Creating a Student object using no-arg constructor
        Student student = new Student();
        student.setId(101);
        student.setName("Alice");
        student.setAge(20);
        
        // Displaying student details
        System.out.println("Student ID: " + student.getId());
        System.out.println("Student Name: " + student.getName());
        System.out.println("Student Age: " + student.getAge());
        System.out.println();
        System.out.println("The Student 1 Is : "+student); // Using toString() method
        
        // Creating another Student object using parameterized constructor
        Student student2 = new Student(102, "Bob", 22);
        System.out.println("The Student 2 Is : "+student2);
        System.out.println();
    }
}
