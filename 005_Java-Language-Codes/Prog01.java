import java.util.Scanner;

public class Prog01 {
    public static void main(String args[]) {
        System.out.print("ENTER YOUR NAME ::: ");
        Scanner sc = new Scanner(System.in);
        String Name = sc.nextLine();
        System.out.println("Welcome " + Name);
    }
}