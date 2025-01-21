import java.util.*;

class MyException extends Exception {
    public MyException(String messAge) {
        super(messAge);
    }
}

public class Prog30 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println();
        String name;
        int Age;
        try {
            System.out.print("Enter your Name ::: ");
            name = sc.nextLine();
            System.out.print("Enter your Age ::: ");
            Age = sc.nextInt();
            System.out.println();
            if (Age < 15) {
                throw new MyException(name + " Age Is " + Age + " Which Is Less Than 15 Years");
            } else if (Age > 60) {
                throw new MyException(name + " Age Is " + Age + " Which Is More Than 60 Years");
            } else {
                System.out.println(name + " Age Is ::: " + Age);

            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        } finally {
            System.out.println("Program Exicuted......");
            System.out.println();
        }
    }
}
