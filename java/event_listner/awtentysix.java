
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class awtentysix extends JFrame implements ActionListener {
    private JTextField tf;
    private JTextField tf1;
    private JButton button;
    private static JDialog d;

    public awtentysix() {
        d = new JDialog(this, "Dialog Example", true);
        d.setLayout(new FlowLayout());

        JLabel l1;
        l1 = new JLabel("enter number =");
        l1.setBounds(30, 50, 100, 20);

        tf = new JTextField();
        tf.setBounds(140, 50, 150, 20);
        tf1 = new JTextField();
        tf1.setBounds(140, 100, 150, 20);

        JLabel l2;
        l2 = new JLabel("enter number =");
        l2.setBounds(30, 100, 100, 20);

        button = new JButton("add");
        button.setBounds(30, 120, 80, 30);
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String s1 = tf.getText();
                int a = Integer.parseInt(s1);
                String s2 = tf1.getText();
                int b = Integer.parseInt(s2);
                JOptionPane.showMessageDialog(null, "Result: " + (a + b));
            }
        });

        add(l1);
        add(l2);
        add(tf);
        add(tf1);
        add(button);

        setLayout(null);
        setSize(400, 300);
        setVisible(true);
    }

 public void actionPerformed(ActionEvent e) {
        // Implementation of actionPerformed method
    }
    public static void main(String args[]) {
        new awtentysix();
    }
}
