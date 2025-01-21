interface A {
    // Interface definition For Abstract method
    void Show();
}

class B implements A {
    @Override
    public void Show() {
        System.out.println("Show Function In Class B");
    }
}

class C implements A {
    @Override
    public void Show() {
        System.out.println("Show Function In Class C");
    }
}

// Main class
public class Prog25 {
    public static void main(String[] args) {
        System.out.println();
        A Obj = new B();

        Obj.Show();
        Obj = new C();

        Obj.Show();
    }
}
