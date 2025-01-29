// WAP To create a class declare It's variable and method 
// Then call those methods and variables by using the objects Of That Class.....

class Student{
    private String name;
    private int age;
    private int Marks;
    Student(String name,int age,int Marks){
        this.name=name;
        this.age=age;
        this.Marks=Marks;       
    }
    String ReturnName(){
        return name;
    }
    int ReturnAge(){
        return age;
    }
    void Display(){
        System.out.println("Hi "+name+" , You're "+age+" Years Old & Your Overall Marks Are "+Marks);
    }
}
public class  AdvJava_002_Classes_Objects{
    public static void main(String[] args) {
        Student Yash=new Student("Yash", 21, 95);
        System.out.println("Your Name Is ::: "+Yash.ReturnName());
        System.out.println("Your Age Is ::: "+Yash.ReturnAge());
        Yash.Display();
        System.out.println();
    }
}
