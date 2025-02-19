class Resource {
    // Synchronize methods to avoid thread interference and ensure thread safety.
    public synchronized void methodA(Resource other) {
        System.out.println(Thread.currentThread().getName() + " is in methodA.");
        try {
            Thread.sleep(1000);  // Simulate work being done
            other.methodB(this);  // Call methodB of the other resource
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }

    public synchronized void methodB(Resource other) {
        System.out.println(Thread.currentThread().getName() + " is in methodB.");
        try {
            Thread.sleep(1000);  // Simulate work being done
            other.methodA(this);  // Call methodA of the other resource
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class AdvJava002_DeadlockPrevention {
    public static void main(String[] args) {
        Resource resource1 = new Resource();
        Resource resource2 = new Resource();

        // Thread 1: Locking in a consistent order to prevent deadlock
        Thread t1 = new Thread(() -> {
            synchronized (resource1) {  // First lock
                System.out.println(Thread.currentThread().getName() + " locked resource1.");
                try { Thread.sleep(100); } catch (InterruptedException e) {}
                synchronized (resource2) {  // Then lock resource2
                    System.out.println(Thread.currentThread().getName() + " locked resource2.");
                    resource1.methodA(resource2);  // Call methodA on resource2
                }
            }
        });

        // Thread 2: Locking in a consistent order to prevent deadlock
        Thread t2 = new Thread(() -> {
            synchronized (resource1) {  // First lock
                System.out.println(Thread.currentThread().getName() + " locked resource1.");
                try { Thread.sleep(100); } catch (InterruptedException e) {}
                synchronized (resource2) {  // Then lock resource2
                    System.out.println(Thread.currentThread().getName() + " locked resource2.");
                    resource1.methodB(resource2);  // Call methodB on resource2
                }
            }
        });

        t1.start();
        t2.start();
    }
}
