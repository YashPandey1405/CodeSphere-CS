// Ques3 Of Lab-8.....
class SalesPerson extends Thread {
    public String name;

    public SalesPerson(String n) {
        this.name = n;
    }

    public void run() {
        System.out.println("Salesperson " + name + " reporting for duty.");
        System.out.println();
    }
}

class Days extends Thread {
    String[] days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    SalesPerson salesPerson;

    public Days(SalesPerson salesPerson) {
        this.salesPerson = salesPerson;
    }

    public void run() {
        for (String day : days) {
            if (day.equals("Sunday")) {
                System.out.println("Salesperson " + salesPerson.name + " suspended Shop On : " + day);
                // salesPerson.suspend();
            } else if (day.equals("Monday") || day.equals("Tuesday")) {
                continue;
            } else if (day.equals("Wednesday")) {
                System.out.println("Salesperson " + salesPerson.name + " resumed Shop On : " + day);
            } else {
                System.out.println("Salesperson " + salesPerson.name + " Continued Shop On : " + day);
            }
        }
    }
}

public class Prog36 {
    public static void main(String args[]) throws Exception {
        System.out.println();
        SalesPerson SP = new SalesPerson("Yash");
        Days DP = new Days(SP);
        SP.start();
        DP.start();
        SP.join();
        DP.join();
        System.out.println();
    }
}
