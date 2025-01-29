// WAP to show the concept of constructors.....

class Car {
    String model;
    int year;

    // Default constructor
    Car() {
        System.out.println("Exicuting The Default Constructor....");
        model = "Unknown";
        year = 0;
    }
    
    // Parameterized constructor
    Car(String model, int year) {
        System.out.println("Exicuting The Parameterized Constructor....");
        this.model = model;
        this.year = year;
    }
    
    // Copy constructor
    Car(Car other) {
        System.out.println("Exicuting The Copy Constructor....");
        this.model = other.model;
        this.year = other.year;
    }

    void display() {
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
    }
}

public class AdvJava_004_Constructors {
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.display();
        
        Car car2 = new Car("Tesla Model S", 2023);
        car2.display();
        
        Car car3 = new Car(car2);
        car3.display();
    }
}

