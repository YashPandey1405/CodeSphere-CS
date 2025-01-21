import java.util.*;

public class Prog09 {
    public static boolean Palindrome(String str) {
        int Start = 0, End = (str.length() - 1);
        while (Start <= End) {
            if (str.charAt(Start) != str.charAt(End)) {
                return false;
            }
            Start++;
            End--;
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("ENTER THE STRING ::: ");
        String string = sc.nextLine();
        boolean ans = Palindrome(string);
        System.out.println("THE STRING '" + string + "' IS AN Palindrome ::: " + ans);
    }
}
