import java.util.LinkedList;
import java.util.Queue;

class SharedBuffer {
    private final Queue<Integer> buffer = new LinkedList<>();
    private final int MAX_CAPACITY = 5;

    // Method for Producer to add items to the buffer
    public synchronized void produce() throws InterruptedException {
        while (buffer.size() == MAX_CAPACITY) {
            System.out.println("Buffer is full. Producer is waiting...");
            wait(); // Wait if the buffer is full
        }
        int item = (int) (Math.random() * 100); // Generate a random item
        buffer.add(item);
        System.out.println("Produced: " + item);
        notify(); // Notify the consumer that the buffer is no longer empty
    }

    // Method for Consumer to consume items from the buffer
    public synchronized void consume() throws InterruptedException {
        while (buffer.isEmpty()) {
            System.out.println("Buffer is empty. Consumer is waiting...");
            wait(); // Wait if the buffer is empty
        }
        int item = buffer.poll();
        System.out.println("Consumed: " + item);
        notify(); // Notify the producer that the buffer is no longer full
    }
}

class Producer implements Runnable {
    private final SharedBuffer sharedBuffer;

    public Producer(SharedBuffer sharedBuffer) {
        this.sharedBuffer = sharedBuffer;
    }

    @Override
    public void run() {
        try {
            while (true) {
                sharedBuffer.produce();
                Thread.sleep(1000); // Simulate time taken to produce an item
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Consumer implements Runnable {
    private final SharedBuffer sharedBuffer;

    public Consumer(SharedBuffer sharedBuffer) {
        this.sharedBuffer = sharedBuffer;
    }

    @Override
    public void run() {
        try {
            while (true) {
                sharedBuffer.consume();
                Thread.sleep(1500); // Simulate time taken to consume an item
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class AdvJava003_ProducerConsumerProblem {
    public static void main(String[] args) {
        SharedBuffer sharedBuffer = new SharedBuffer();

        Thread producerThread = new Thread(new Producer(sharedBuffer));
        Thread consumerThread = new Thread(new Consumer(sharedBuffer));

        producerThread.start();
        consumerThread.start();
    }
}
