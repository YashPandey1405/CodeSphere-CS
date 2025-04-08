import javax.swing.*;
import java.awt.*;

public class LayoutManager extends JFrame {

    public LayoutManager() {
        setTitle("Layout Manager Demo");
        setSize(500, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout()); // Main layout

        // NORTH - FlowLayout Panel
        JPanel northPanel = new JPanel(new FlowLayout());
        northPanel.add(new JLabel("FlowLayout:"));
        northPanel.add(new JButton("One"));
        northPanel.add(new JButton("Two"));
        northPanel.add(new JButton("Three"));
        add(northPanel, BorderLayout.NORTH);

        // CENTER - GridLayout Panel
        JPanel centerPanel = new JPanel(new GridLayout(2, 2, 10, 10));
        centerPanel.setBorder(BorderFactory.createTitledBorder("GridLayout (2x2)"));
        centerPanel.add(new JButton("A"));
        centerPanel.add(new JButton("B"));
        centerPanel.add(new JButton("C"));
        centerPanel.add(new JButton("D"));
        add(centerPanel, BorderLayout.CENTER);

        // SOUTH - FlowLayout with Right Alignment
        JPanel southPanel = new JPanel(new FlowLayout(FlowLayout.RIGHT));
        southPanel.add(new JButton("OK"));
        southPanel.add(new JButton("Cancel"));
        add(southPanel, BorderLayout.SOUTH);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            LayoutManager demo = new LayoutManager();
            demo.setVisible(true);
        });
    }
}
