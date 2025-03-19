import java.applet.*;
import java.awt.*;
import java.awt.event.*;

@SuppressWarnings({ "unused", "removal" })
public class AdvJava001_BasicApplet extends Applet {
    @Override
    public void paint(Graphics g) {
        // Draw a rectangle
        g.drawRect(50, 50, 300, 100);
        
        // Display the message inside the rectangle
        g.drawString("Hello I Am Yash Pandey", 100, 100);
    }
}