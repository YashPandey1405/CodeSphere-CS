public class Prog22 {
    static class Base {
        int i;

        public Base() {
            i = 0;
        }

        public Base(int a) {
            i = a;
        }
    }

    static class Derived extends Base {
        int j;

        public Derived() {
            super();
            j = 0;
        }

        public Derived(int a, int b) {
            super(a);
            j = b;
        }
    }

    public static void main(String[] args) {
        Derived d = new Derived(10, 20);
        System.out.println("The Value Of Base Class Variable Is ::: " + d.i);
        System.out.println("The Value Of Derived Class Variable Is ::: " + d.j);
    }
}
