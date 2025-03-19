import java.applet.*;
import java.awt.*;
import java.awt.event.*;

@SuppressWarnings({ "unused", "removal" })
public class AdvJava002_MovingBanner extends Applet implements Runnable {
    private String message = "Welcome to the Moving Banner!";
    private int xPos = 300; // Initial position of the text
    private int yPos = 100; // Y-coordinate of the text
    
    private Thread thread;  // Thread to control the movement of the banner

    @Override
    public void init() {
        // Start the thread for animation
        thread = new Thread(this);
        thread.start();
    }

    @Override
    public void run() {
        while (true) {
            // Move the text to the left
            xPos -= 2; 

            // If the text moves completely off screen, reset its position
            if (xPos < -getFontMetrics(getFont()).stringWidth(message)) {
                xPos = getWidth();
            }
            
            // Repaint the applet
            repaint();
            
            // Pause for a short period to control the speed of the movement
            try {
                Thread.sleep(50); // Sleep for 50 milliseconds
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }

    @Override
    public void paint(Graphics g) {
        // Clear the background (optional)
        g.clearRect(0, 0, getWidth(), getHeight());
        
        // Draw the moving message
        g.drawString(message, xPos, yPos);
    }

    @Override
    public void stop() {
        // Stop the thread when the applet is stopped
        thread = null;
    }
}
