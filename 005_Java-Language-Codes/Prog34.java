// Ques1 Of Lab-8.....
class Base {
    int num;
    boolean ValueSet = false;

    public synchronized void Put(int n) {
        while (ValueSet == true) {
            try {
                wait();
            } catch (Exception e) {
            }
        }
        System.out.println("Put -->  num : " + n);
        this.num = n;
        ValueSet = true;
        notify();
    }

    public synchronized void Get() {
        while (ValueSet == false) {
            try {
                wait();
            } catch (Exception e) {
            }
        }
        System.out.println("Get -->  num : " + num);
        ValueSet = false;
        notify();
    }
}

class Producer implements Runnable {
    Base Obj;

    public Producer(Base b) {
        this.Obj = b;
        Thread T1 = new Thread(this, "Producer");
        T1.start();
    }

    @Override
    public void run() {
        int i = 0;
        while (i <= 5) {
            Obj.Put(i++);
            try {
                Thread.sleep(1000);
            } catch (Exception e) {
                e.getStackTrace();
            }
        }
    }
}

class Consumer implements Runnable {
    Base Obj;

    public Consumer(Base b) {
        this.Obj = b;
        Thread T2 = new Thread(this, "Consumer");
        T2.start();
    }

    @Override
    public void run() {
        int i = 0;
        while (i <= 5) {
            Obj.Get();
            try {
                Thread.sleep(2000);
            } catch (Exception e) {
                e.getStackTrace();
            }
        }
    }
}

public class Prog34 {
    public static void main(String args[]) {
        Base Obj = new Base();
        Producer P = new Producer(Obj);
        Consumer C = new Consumer(Obj);
    }
}
