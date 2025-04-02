import javax.swing.*;
import java.awt.event.*;

public class awtwentyfour extends JFrame implements ActionListener
{
           
private JTextField field;
 private DefaultListModel<String> listModel;
private JList<String> list;
private JButton button,bdelete;

public awtwentyfour()
{
 
    JLabel l1;  
    l1=new JLabel("enter number=");  
    l1.setBounds(30,50,100,20); 
    
    field=new JTextField();
    field.setBounds(140,50,150,20);

    button=new JButton("add");
    button.setBounds(30,120,80,30);
    button.addActionListener(this);

    bdelete=new JButton("delete");
    bdelete.setBounds(120,120,80,30);
    bdelete.addActionListener(this);

    listModel=new DefaultListModel<String>();
    list=new JList <>(listModel);
    JScrollPane scrollPane=new JScrollPane(list);
    scrollPane.setBounds(30,150,150,60);

    add(l1);
    add(field);
    add(button);
    add(bdelete);
    add(scrollPane);

    setLayout(null);
    setSize(400,300);
    setVisible(true);
}

  
    public void actionPerformed(ActionEvent e)
    {
     if(e.getSource()==button)
     {
         String s1 = field.getText();

        listModel.addElement(s1);  
     }
     else
     {
            listModel.clear();
     }
        
    }
    public static void main(String[] args)
    {
        new awtwentyfour();
  }

}