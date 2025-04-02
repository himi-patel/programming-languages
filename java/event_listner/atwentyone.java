import javax.swing.*;
import java.awt.event.*;

public class atwentyone extends JFrame implements ActionListener {
    private JTextField field;
    private DefaultListModel<String> listModel;
    private JList<String> list;

    public atwentyone() {
        field = new JTextField();
        field.setBounds(50, 40, 150, 30);
        JButton button = new JButton("click me");
        button.setBounds(50, 70, 150, 30);
         button.addActionListener(this);

        listModel = new DefaultListModel<>();
        list = new JList<>(listModel);
        JScrollPane scrollPane = new JScrollPane(list);
        scrollPane.setBounds(50, 100, 200, 150);

        add(field);
        add(button);
        add(scrollPane);



        setLayout(null);
        setSize(400, 300);
        setVisible(true);
    }

    public void table() {
        String s1 = field.getText();
        int a = Integer.parseInt(s1); 

        listModel.clear();

        for (int i = 1; i <= 10; i++) {
            listModel.addElement(a + " x " + i + " = " + (a * i));  
        }
    }

    public void actionPerformed(ActionEvent e) {
        table();
    }

    public static void main(String[] args) {
        new atwentyone();
    }
}
