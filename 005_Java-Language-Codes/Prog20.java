class cube {
    static int num;

    cube(int n) {
        num = n;
    }

    static void Calculate() {
        System.out.println("cube is ::: " + (num * num * num));
    }
}

public class Prog20 {
    public static void main(String args[]) {
        cube c1 = new cube(10);
        System.out.println();
        c1.Calculate();
        System.out.println();
    }
}
