interface Shape {
    void Area();
}

class Circle implements Shape {
    double Radius;

    public Circle(double r) {
        Radius = r;
    }

    @Override
    public void Area() {
        System.out.println("The Area Of Circle Is ::: " + (3.14 * Radius * Radius));
    }
}

public class Prog28 {
    public static void main(String[] args) {
        System.out.println();
        Circle c = new Circle(5);
        c.Area();
    }
}
