import javax.swing.*;

public class Main
{
    public static void main(String[] args)
    {
        JFrame obj = new JFrame();
        Gameplay gamePlay = new Gameplay(); //Sukuriamas naujas objektas
        obj.setBounds(10,10,700,600);
        obj.setTitle("Block Breaker");
        obj.setResizable(false);
        obj.setVisible(true);
        obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        obj.add(gamePlay); //Objektas perduodamas JFrame'ui
    }
}
