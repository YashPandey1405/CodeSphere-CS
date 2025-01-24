// WAP for multilevel inheritance 

class GrandFather{
    String name;
    int age;
    public GrandFather(String name, int age) {
        this.name = name;
        this.age=age;
        System.out.println("Executing the constructor of the GrandFather class.");
    }
    public void Display(){
        System.out.println("GrandFather's name is '"+name+"' and age is "+age);
    }
}

class Father extends GrandFather{
    String name;
    int age;
    public Father(String Gname,int Gage,String name, int age) {
        super(Gname, Gage);
        this.name = name;
        this.age=age;
        System.out.println("Executing the constructor of the Father class.");
    }
    public void Display(){
        super.Display();
        System.out.println("Father's name is '"+name+"' and age is "+age);
    }
}

class Son extends Father{
    String name;
    int age;
    public Son(String Gname,int Gage,String Pname,int Page,String name, int age) {
        super(Gname, Gage, Pname, Page);
        this.name = name;
        this.age=age;
        System.out.println("Executing the constructor of the Son class.");
    }
    public void Display(){
        super.Display();
        System.out.println("Son's name is '"+name+"' and age is "+age);
    }
}

public class AdvJava_003_MultiLevelInheritance {
    public static void main(String[] args) {
        Son son = new Son("Hira Lal",84,"Prabhash",50,"Yash",21);
        System.out.println();
        son.Display();
    }
}
