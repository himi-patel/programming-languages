import java.applet.Applet;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GridLayoutApplet extends Applet implements ActionListener {
    Button redButton, blueButton;
    Panel canvasPanel;

    public void init() {
        setLayout(new BorderLayout());

        redButton = new Button("Red");
        blueButton = new Button("Blue");
        redButton.addActionListener(this);
        blueButton.addActionListener(this);

        Panel buttonPanel = new Panel();
        buttonPanel.add(redButton);
        buttonPanel.add(blueButton);
        add(buttonPanel, BorderLayout.NORTH);

        canvasPanel = new Panel();
        canvasPanel.setLayout(new GridLayout(2, 2)); // 2x2 grid layout for canvas
        add(canvasPanel, BorderLayout.CENTER);

        for (int i = 0; i < 4; i++) {
            CircleCanvas circleCanvas = new CircleCanvas();
            canvasPanel.add(circleCanvas);
        }
    }

    public void actionPerformed(ActionEvent ae) {
        String buttonLabel = ae.getActionCommand();
        Color color = null;
        if (buttonLabel.equals("Red")) {
            color = Color.RED;
        } else if (buttonLabel.equals("Blue")) {
            color = Color.BLUE;
        }
        if (color != null) {
            Component[] components = canvasPanel.getComponents();
            for (Component component : components) {
                if (component instanceof CircleCanvas) {
                    ((CircleCanvas) component).setColor(color);
                    ((CircleCanvas) component).repaint();
                }
            }
        }
    }
}

class CircleCanvas extends Canvas {
    private Color color;

    public CircleCanvas() {
        setSize(50, 50);
        color = Color.BLACK; // default color
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public void paint(Graphics g) {
        g.setColor(color);
        g.fillOval(10, 10, 30, 30);
    }
}