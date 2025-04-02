import java.awt.*;
import java.awt.event.*;
import javax.swing.*;  


public class awtwenty extends JFrame implements ActionListener
{
    JTextArea area;
    JTextField field;
    public awtwenty()
    {

        area=new JTextArea();
        area.setBounds(50,120,200,60);
       field=new JTextField("write here");
        field.setBounds(50,50,250,50);
        JButton Button=new JButton("click me");
        Button.setBounds(50,180,100,60);
        Button.addActionListener(this);


        add(area);
        add(field);
        add(Button);
        setSize(400,300);
        setLayout(null);
        setVisible(true);


    }
    
    public void actionPerformed(ActionEvent e)
    {
        String s =field.getText();
        area.setText(s);
    }

    public static void main(String[] args)
    {
     new awtwenty();
    }
}