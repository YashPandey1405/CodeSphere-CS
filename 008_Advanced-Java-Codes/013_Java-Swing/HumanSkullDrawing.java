import javax.swing.*;
import java.awt.*;

public class HumanSkullDrawing extends JPanel {

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        // Cast Graphics to Graphics2D for better control over drawing
        Graphics2D g2d = (Graphics2D) g;

        // Anti-aliasing for smoother curves
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING,
                             RenderingHints.VALUE_ANTIALIAS_ON);

        // Draw skull outline (main head shape)
        g2d.setColor(new Color(255, 255, 255)); // Skull color: white
        g2d.fillOval(100, 50, 200, 250); // Oval for the skull

        // Draw eyes (two black circles)
        g2d.setColor(Color.BLACK);
        g2d.fillOval(145, 120, 35, 50); // Left eye
        g2d.fillOval(220, 120, 35, 50); // Right eye

        // Draw nose (triangle-like shape)
        int[] xPoints = {190, 210, 200}; // X coordinates for the triangle
        int[] yPoints = {180, 180, 220}; // Y coordinates for the triangle
        g2d.fillPolygon(xPoints, yPoints, 3); // Nose is a simple triangle

        // Draw mouth (curved shape)
        g2d.setColor(Color.BLACK);
        g2d.drawArc(150, 220, 100, 50, 0, -180); // Mouth using arc

        // Draw teeth (simplified)
        g2d.setColor(Color.WHITE);
        g2d.fillRect(160, 230, 20, 30); // Left tooth
        g2d.fillRect(180, 230, 20, 30); // Second tooth
        g2d.fillRect(200, 230, 20, 30); // Third tooth
        g2d.fillRect(220, 230, 20, 30); // Fourth tooth
        g2d.fillRect(240, 230, 20, 30); // Fifth tooth

        // Draw cracks on the skull (optional for effect)
        g2d.setColor(Color.GRAY);
        g2d.drawLine(160, 80, 220, 110);  // Example crack
        g2d.drawLine(230, 100, 170, 150); // Another crack
    }

    public static void main(String[] args) {
        // Create a frame to display the panel
        JFrame frame = new JFrame("Human Skull Drawing");
        HumanSkullDrawing skullPanel = new HumanSkullDrawing();

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 400);         // Set the frame size
        frame.add(skullPanel);           // Add the panel to the frame
        frame.setVisible(true);          // Make the frame visible
    }
}
