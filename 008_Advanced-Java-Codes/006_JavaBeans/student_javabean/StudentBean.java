package student_javabean;

import java.io.Serializable;

public class Student implements Serializable {
    private static final long serialVersionUID = 1L; // For serialization

    private int id;
    private String name;
    private int age;

    // No-argument constructor (mandatory for JavaBeans)
    public Student() {}

    // Constructor with parameters
    public Student(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    // Getter and Setter methods
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        if (age > 0) { // Validation logic
            this.age = age;
        } else {
            System.out.println("Age must be positive.");
        }
    }

    // toString method for easy display
    @Override
    public String toString() {
        return "Student [ID=" + id + ", Name=" + name + ", Age=" + age + "]";
    }
}

