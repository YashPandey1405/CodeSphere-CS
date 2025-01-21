class Student {
    int RollNo;
    String Name;
    float Percentage;

    public Student(int r, String n, float p) {
        this.RollNo = r;
        this.Name = n;
        this.Percentage = p;
    }

    void Result() {
        System.out.println(Name + " With RollNo " + RollNo + " GOT " + Percentage + "% Marks");
    }
}

public class Prog18 {
    public static void main(String args[]) {
        Student Yash = new Student(122, "Yash", 91);
        System.out.println();
        Yash.Result();
        System.out.println();
    }
}
