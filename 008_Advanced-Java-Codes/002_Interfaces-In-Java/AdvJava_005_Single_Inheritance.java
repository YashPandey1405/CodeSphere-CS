package Interfaces;

interface Animal {
    void sound();
}

interface Dog extends Animal {
    void bark();
}

class Labrador implements Dog {
    public void sound() {
        System.out.println("Animal makes sound");
    }

    public void bark() {
        System.out.println("Labrador barks");
    }
}

public class Interface001_SingleInheritance{
    public static void main(String[] args) {
        Labrador lab = new Labrador();
        lab.sound();
        lab.bark();
    }
}
