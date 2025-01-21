class Numbers {
    int Num;
    static int Count;

    public Numbers(int n) {
        this.Num = n;
        Count++;
    }
}

public class Prog19 {
    public static void main(String args[]) {
        Numbers ob1 = new Numbers(1);
        Numbers ob2 = new Numbers(2);
        Numbers ob3 = new Numbers(3);
        Numbers ob4 = new Numbers(4);
        Numbers ob5 = new Numbers(5);
        System.out.println();
        System.out.println("Total Number of Objects ::: " + Numbers.Count);
        System.out.println();
    }
}
