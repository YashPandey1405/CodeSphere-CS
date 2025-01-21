class Base {
    void display() {
        System.out.println("this is Base class Function");
    }
}

class Derived extends Base {
    void display() {
        System.out.println("this is Derived class Function");
    }
}

public class Prog21 {
    public static void main(String args[]) {
        Derived c1 = new Derived();
        System.out.println();
        c1.display();
    }
}
