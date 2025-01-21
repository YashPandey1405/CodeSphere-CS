class Animal {
    String Animal;

    public Animal(String a) {
        this.Animal = a;
        System.out.println("The Animal Is ::: " + Animal);
    }

    public void AnimalSound() {
        System.out.println("The Animal " + Animal + " makes a sound");
    }

}

class Dog extends Animal {
    String Dog;

    public Dog(String a, String d) {
        super(a);
        this.Dog = d;
        System.out.println("The Name Of Dog Is ::: " + Dog);
    }

    public void AnimalSound() {
        super.AnimalSound();
    }
}

public class Prog24 {
    public static void main(String args[]) {
        Animal myDog = new Dog("Dog", "Jack");
        myDog.AnimalSound();
    }
}
