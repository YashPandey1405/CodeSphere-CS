import java.util.Scanner;

public class Prog02 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER YOUR CHARACTER ::: ");
        char Char=sc.nextLine().charAt(0);
        System.out.println("THE ASCII VALUE OF CHAR "+Char+" IS ::: "+(int)Char);
    }
}
