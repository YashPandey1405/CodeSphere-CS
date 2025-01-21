import java.util.*;

public class Prog05 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("ENTER YOUR FIRST CHARACTER ::: ");
        char Char1 = sc.nextLine().charAt(0);
        System.out.print("ENTER YOUR SECOND CHARACTER ::: ");
        char Char2 = sc.nextLine().charAt(0);
        if (Char1 > Char2) {
            System.out.println("'" + Char1 + "' > '" + Char2 + "'");
        } else {
            System.out.println("'" + Char1 + "' < '" + Char2 + "'");
        }
    }
}
