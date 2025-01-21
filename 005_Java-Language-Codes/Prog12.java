public class Prog12 {
    public static void Area(int l, int b) {
        System.out.println("THE AREA OF RECTANGLE IS ::: " + (l * b));
    }

    public static void Area(double r) {
        System.out.println("THE AREA OF CIRCLE IS ::: " + (3.14 * r * r));
    }

    public static void Area(double base, double height) {
        System.out.println("THE AREA OF TRIANGLE IS ::: " + (float) (0.5 * base * height));
    }

    public static void main(String args[]) {
        Area(5, 10);
        Area(5.5);
        Area(5.1, 6.3);
    }
}
