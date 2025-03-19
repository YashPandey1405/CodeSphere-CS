import java.applet.*;
import java.awt.*;
import java.awt.event.*;

@SuppressWarnings({ "unused", "removal" })
public class AdvJava003_AppletWithFrame extends Applet {
    
    @Override
    public void init() {
        // Create a Frame
        Frame myFrame = new Frame("Applet with Frame");

        // Create a Label in the Frame
        Label label = new Label("Hello, I am inside a Frame!");

        // Add the label to the frame
        myFrame.add(label);
        
        // Set frame size and make it visible
        myFrame.setSize(300, 200);
        myFrame.setVisible(true);
    }

    @Override
    public void paint(Graphics g) {
        g.drawString("This is an Applet!", 50, 50);
    }
}
