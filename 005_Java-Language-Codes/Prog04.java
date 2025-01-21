import java.util.*;

public class Prog04 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("ENTER THE FIRST NUMBER ::: ");
        int a = sc.nextInt();
        System.out.print("ENTER THE SECOND NUMBER ::: ");
        int b = sc.nextInt();
        System.out.println("Before Swap ::: THE Value Of a=" + a + " And b=" + b);
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        System.out.println("After Swap ::: THE Value Of a=" + a + " And b=" + b);
    }
}
