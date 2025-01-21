import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Prog39 extends JFrame {
    public Prog39() {
        setTitle("Name Display On Click");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel();
        JLabel nameLabel = new JLabel("Click Here!");
        nameLabel.setFont(new Font("Arial", Font.PLAIN, 24));
        nameLabel.setForeground(Color.BLUE);
        nameLabel.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                nameLabel.setText("Yash Pandey");
            }
        });
        panel.add(nameLabel);
        getContentPane().add(panel);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Prog39 demo = new Prog39();
            demo.setVisible(true);
        });
    }
}