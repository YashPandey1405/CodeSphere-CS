import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class AdapterClass extends JFrame {

    JLabel label;

    public AdapterClass() {
        setTitle("Adapter Class Example");
        setSize(400, 300);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        label = new JLabel("Click anywhere inside the frame");
        add(label);

        // Using MouseAdapter (Adapter class) instead of implementing MouseListener directly
        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                label.setText("Mouse Clicked at: (" + e.getX() + ", " + e.getY() + ")");
            }
        });
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            AdapterClass demo = new AdapterClass();
            demo.setVisible(true);
        });
    }
}
