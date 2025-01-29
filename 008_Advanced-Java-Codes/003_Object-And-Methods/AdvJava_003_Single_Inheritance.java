// WAP To Implement Single Inheritance......

class Father{
    String name;
    int age;
    public Father(String name, int age) {
        this.name = name;
        this.age=age;
        System.out.println("Executing the constructor of the Father class.");
    }
    public void Display(){
        System.out.println("Father's name is '"+name+"' and age is "+age);
    }
}

class Son extends Father{
    String name;
    int age;
    public Son(String Pname,int Page,String name, int age) {
        super(Pname, Page);
        this.name = name;
        this.age=age;
        System.out.println("Executing the constructor of the Son class.");
    }
    public void Display(){
        super.Display();
        System.out.println("Son's name is '"+name+"' and age is "+age);
    }
}

public class AdvJava_003_Single_Inheritance{
    public static void main(String[] args) {
        Son son = new Son("Prabhash",50,"Yash",21);
        System.out.println();
        son.Display();
        System.out.println();
    }
}