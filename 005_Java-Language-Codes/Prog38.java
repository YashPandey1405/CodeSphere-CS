import java.awt.*;
import java.awt.event.*;

public class Prog38 extends Frame implements MouseListener {
    private Panel panel;
    private Label statusLabel;

    public Prog38() {
        setTitle("Mouse Events");
        setSize(400, 300);
        setLocationRelativeTo(null);
        setLayout(new BorderLayout());

        panel = new Panel();
        panel.setBackground(Color.WHITE);
        add(panel, BorderLayout.CENTER);

        statusLabel = new Label("No event");
        add(statusLabel, BorderLayout.SOUTH);
        panel.addMouseListener(this);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        panel.setBackground(Color.BLACK);
        statusLabel.setText("clicked");
    }

    public void mouseEntered(MouseEvent e) {
        panel.setBackground(Color.LIGHT_GRAY);
        statusLabel.setText("Entering");
    }

    public void mouseExited(MouseEvent e) {
        panel.setBackground(Color.WHITE);
        statusLabel.setText("Released");
    }

    public void mousePressed(MouseEvent e) {
        panel.setBackground(Color.GRAY);
        statusLabel.setText("Pressed");
    }

    public void mouseReleased(MouseEvent e) {
        panel.setBackground(Color.DARK_GRAY);
        statusLabel.setText("Released");
    }

    public static void main(String[] args) {
        new Prog38();
    }
}
