package Interfaces;

interface Animal {
    void sound();
}

interface Dog extends Animal {
    void bark();
}

interface Labrador extends Dog {
    void fetch();
}

class DogBreed implements Labrador {
    public void sound() {
        System.out.println("Animal makes sound");
    }

    public void bark() {
        System.out.println("Dog barks");
    }

    public void fetch() {
        System.out.println("Labrador fetches the ball");
    }
}
public class Interface002_MultiLevelInheritance{
    public static void main(String[] args) {
        DogBreed breed = new DogBreed();
        breed.sound();
        breed.bark();
        breed.fetch();
    }
}
