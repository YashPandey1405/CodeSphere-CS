// WAP To Implement for Loop & Methods Of Thread like join,wait,sleep and suspend...

class MyThread extends Thread {
    // This method will be executed when the thread starts
    public void run() {
        try {
            System.out.println(Thread.currentThread().getName() + " started.");

            // Using sleep() to pause the thread for 1 second
            Thread.sleep(1000);
            System.out.println(Thread.currentThread().getName() + " slept for 1 second.");

            // Using wait() to make the current thread wait
            synchronized (this) {
                wait(1000); // Makes the current thread wait for 1 second
                System.out.println(Thread.currentThread().getName() + " resumed after waiting.");
            }

        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }

    // Using suspend() method (deprecated)
    @SuppressWarnings("removal")
    public void suspendThread() {
        try {
            Thread.sleep(500); // Sleep for 0.5 second to simulate a working state
            System.out.println(Thread.currentThread().getName() + " is going to suspend.");
            this.suspend(); // Deprecated method, should be avoided
            System.out.println(Thread.currentThread().getName() + " is suspended.");
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class AdvJava001_BasicThreadMethods {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();

        // Using a for loop to start threads
        for (int i = 0; i < 2; i++) {
            if (i == 0) {
                t1.start(); // Start first thread
            } else {
                t2.start(); // Start second thread
            }
        }

        // Using join() to ensure the main thread waits for other threads to finish
        try {
            t1.join(); // Waits for t1 to complete
            t2.join(); // Waits for t2 to complete
            System.out.println("Both threads have finished.");
        } catch (InterruptedException e) {
            System.out.println(e);
        }

        // Suspend method (just for demonstration; avoid using suspend)
        t1.suspendThread(); // Deprecated usage, don't use it in modern programs
    }
}
