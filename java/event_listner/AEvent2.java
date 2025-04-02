import java.awt.*;

import java.awt.event.*;

class AEvent2 extends Frame implements ActionListener {
    TextField tf, tf2, tf3;
    Button b, m, s, p;

    AEvent2() {

        tf = new TextField();
        tf.setBounds(60, 50, 270, 20);

        tf2 = new TextField();
        tf2.setBounds(60, 80, 270, 20);

        tf3 = new TextField();
        tf3.setBounds(60, 180, 170, 20);

        b = new Button("+");
        b.setBounds(50, 120, 40, 30);

        m = new Button("-");
        m.setBounds(120, 120, 40, 30);

        s = new Button("*");
        s.setBounds(180, 120, 40, 30);

        p = new Button("/");
        p.setBounds(240, 120, 40, 30);

        b.addActionListener(this);
        m.addActionListener(this);
        s.addActionListener(this);
        p.addActionListener(this);

        add(b);
        add(tf);
        add(tf2);
        add(tf3);

        add(m);
        add(tf);
        add(tf2);
        add(tf3);

        add(s);
        add(tf);
        add(tf2);
        add(tf3);

        add(p);
        add(tf);
        add(tf2);
        add(tf3);

        setSize(600, 600);

        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b) {

            Integer x = Integer.parseInt(tf.getText());
            Integer y = Integer.parseInt(tf2.getText());

            Integer z = x + y;

            tf3.setText(z + "");
        }

        if (e.getSource() == m) {
            Integer x = Integer.parseInt(tf.getText());
            Integer y = Integer.parseInt(tf2.getText());

            Integer z = x - y;

            tf3.setText(z + "");
        }

        if (e.getSource() == s) {
            Integer x = Integer.parseInt(tf.getText());
            Integer y = Integer.parseInt(tf2.getText());

            Integer z = x * y;

            tf3.setText(z + "");
        }

        if (e.getSource() == p) {
            Integer x = Integer.parseInt(tf.getText());
            Integer y = Integer.parseInt(tf2.getText());

            Integer z = x / y;

            tf3.setText(z + "");
        }
    }

    public static void main(String args[]) {
        new AEvent2();
    }
}