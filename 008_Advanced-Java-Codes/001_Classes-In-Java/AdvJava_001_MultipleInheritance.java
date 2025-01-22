// WAP To Implement multiple inheritance in java....

interface Flyable {
    void fly();
}

interface Swimmable {
    void swim();
}

class Duck implements Flyable, Swimmable {
    @Override
    public void fly() {
        System.out.println("Duck flies in a specific way!");
    }

    @Override
    public void swim() {
        System.out.println("Duck swims in a specific way!");
    }
}

public class AdvJava_001_MultipleInheritance {
    public static void main(String[] args) {
        Duck duck = new Duck();
        duck.fly();
        duck.swim();
    }
}
