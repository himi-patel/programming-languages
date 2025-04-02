import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class colorbutton extends Applet implements ActionListner
{
    Button red,blue;

    public void init()
    {
        red=new button ("Red");
        blue=new button ("Blue");

        add(red)
        add(blue)
        red.addActionListener(this);
        blue.addActionListener(this);


    }
    public void actionPerformed(Actionevent e)

    String str=e.getActionCommand();
    if(str.equals("red"))
    {
        this.setBackground(color.red);
    }
    else if(str.equals("blue"))
    {
        this.setBackground(color.blue);
    }
    {

    }
}