class MyException extends Exception {
    public MyException(String message) {
        super(message);
    }
}

public class Prog31 {
    public static void CheckException(String Name, int Age) {
        try {
            Check(Name, Age);
        } catch (MyException e) {
            System.out.println("Error : " + e);
        } finally {
            System.out.println("Program Exicuted......");
            System.out.println();
        }
    }

    public static void Check(String Name, int Age) throws MyException {
        if (Age < 18) {
            throw new MyException(Name + " Is Not Eligible For Voting");
        } else {
            System.out.println(Name + " Is Eligible For Voting");
        }
    }

    public static void main(String args[]) {
        CheckException("Yash", 21);
        CheckException("Rahul", 17);
    }
}
