import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class RBGColorMixer extends JFrame implements AdjustmentListener {
    private JScrollBar redScrollBar;
    private JScrollBar greenScrollBar;
    private JScrollBar blueScrollBar;
    private JLabel colorLabel;

    public RBGColorMixer() {
        setTitle("RGB Color Mixer");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(null);

        redScrollBar = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 256);
        greenScrollBar = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 256);
        blueScrollBar = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 256);

        redScrollBar.addAdjustmentListener(this);
        greenScrollBar.addAdjustmentListener(this);
        blueScrollBar.addAdjustmentListener(this);

        colorLabel = new JLabel();
        colorLabel.setOpaque(true);
        colorLabel.setPreferredSize(new Dimension(200, 200));
        updateColor();

        JPanel scrollBarsPanel = new JPanel(new GridLayout(3, 1));
        scrollBarsPanel.add(redScrollBar);
        scrollBarsPanel.add(greenScrollBar);
        scrollBarsPanel.add(blueScrollBar);

        add(scrollBarsPanel, BorderLayout.NORTH);
        add(colorLabel, BorderLayout.CENTER);
    }

    public void adjustmentValueChanged(AdjustmentEvent e) {
        updateColor();
    }

    private void updateColor() {
        int r = redScrollBar.getValue();
        int g = greenScrollBar.getValue();
        int b = blueScrollBar.getValue();
        colorLabel.setBackground(new Color(r, g, b));
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new RBGColorMixer().setVisible(true);
            }
        });
    }
}
