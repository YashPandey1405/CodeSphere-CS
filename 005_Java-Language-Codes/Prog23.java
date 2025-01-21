public class Prog23 {
    static class Base {
        int i;

        public Base() {
            i = 0;
        }

        public Base(int a) {
            i = a;
        }
    }

    static class Intermediate extends Base {
        int j;

        public Intermediate() {
            super();
            j = 0;
        }

        public Intermediate(int a, int b) {
            super(a);
            j = b;
        }
    }

    static class Derived extends Intermediate {
        int k;

        public Derived() {
            super();
            k = 0;
        }

        public Derived(int a, int b, int c) {
            super(a, b);
            k = c;
        }
    }

    public static void main(String[] args) {
        Derived d = new Derived(10, 20, 30);
        System.out.println("The Value Of Base Class Variable Is ::: " + d.i);
        System.out.println("The Value Of Intermediate Class Variable Is ::: " + d.j);
        System.out.println("The Value Of Derived Class Variable Is ::: " + d.k);
    }
}
