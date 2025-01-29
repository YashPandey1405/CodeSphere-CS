// Write a Java program where a method with the same name is declared in both the parent and child classes. 
// The method should have the same parameter list in one case and a different parameter list in another case. 
// Also, provide a description of which category this program falls into.


class Parent {
    void show(int a) {
        System.out.println("Parent class method with one parameter: " + a);
    }

    void show(int a, int b) {
        System.out.println("Parent class method with two parameters: " + a + ", " + b);
    }
}

class Child extends Parent {
    @Override
    void show(int a) {
        System.out.println("Child class method (Overriding) with one parameter: " + a);
    }

    void show(String msg) {
        System.out.println("Child class method (Overloading) with String parameter: " + msg);
    }
}

public class AdvJava_006_SpecialQuestion {
    public static void main(String[] args) {
        Child obj = new Child();
        obj.show(10);
        obj.show("Hello");
        obj.show(10, 20);
    }
}
