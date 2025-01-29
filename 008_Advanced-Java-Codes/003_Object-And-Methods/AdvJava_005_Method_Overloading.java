// WAP To show the concept of method overloading....

public class AdvJava_005_Method_Overloading {
    public static void Area(int l,int b){
        System.out.println("The Area Of Rectangle Is ::: "+(l*b));
    }
    public static void Area(int side){
        System.out.println("The Area Of Square Is ::: "+(side*side));
    }
    public static void Area(double radius){
        System.out.println("The Area Of Circle Is ::: "+(3.14*radius*radius));
    }
    public static void main(String[] args) {
        Area(10,20);
        Area(10);
        Area(5.5);
    }   
}
