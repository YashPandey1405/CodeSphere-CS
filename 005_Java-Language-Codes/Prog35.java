// Ques2 Of Lab-8.....
class First extends Thread {
    public void run() {
        for (int i = 0; i < 9; i++) {
            System.out.print("An    ");
            try {
                Thread.sleep(1000);
            } catch (Exception e) {
            }
        }
    }
}

class Second extends Thread {
    public void run() {
        for (int i = 0; i < 3; i++) {
            System.out.println("\nB    ");
            try {
                Thread.sleep(3000);
            } catch (Exception e) {
            }
        }
    }
}

public class Prog35 {
    public static void main(String args[]) {
        System.out.println();
        First F = new First();
        Second S = new Second();
        F.start();
        try {
            Thread.sleep(3000);
        } catch (Exception e) {
        }
        S.start();
    }
}
