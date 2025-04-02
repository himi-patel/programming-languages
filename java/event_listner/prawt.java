import java.awt.*;

import java.awt.event.*;

class prawt extends Frame implements ActionListener
{
    

    prawt()
    {
        TextField tf=new TextField();
        tf.setBounds(50,120,250,30);
        Button b=new Button("click me");
        b.setBounds(50,190,130,56);

        b.addActionListener(this);
        
        add(b);
        add(tf);
        setSize(900,900);
        setLayout(null);
        setVisible(true);



    }

public void actionPerformed(ActionEvent e)
{
    tf.setText("welcome");
}
public static void main(String args[])
{
    new prawt();
}
}