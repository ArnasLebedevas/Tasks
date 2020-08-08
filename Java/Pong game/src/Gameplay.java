import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.Timer;
public class Gameplay extends JPanel implements KeyListener, ActionListener
{
    private boolean play = false;
    private int scoreRight = 0;
    private int scoreLeft = 0;
    private Timer timer;
    private int delay = 7;
    private int playerX = 670;
    private int playerXUP = 180;
    private int playerY = 10;
    private int playerYUP = 180;
    private int ballPosX = 350;
    private int ballPosY = 230;
    private int ballXdir = -1;
    private int ballYdir = -2;
    public Gameplay()
    {
        addKeyListener(this);
        setFocusable(true);
        setFocusTraversalKeysEnabled(false);
        timer = new Timer(delay,this);
        timer.start();
    }
    public void paint(Graphics g)
    {
        //Background
        g.setColor(Color.BLACK);
        g.fillRect(1,1,692,592);
        //Borders
        g.setColor(Color.yellow);
        g.fillRect(0,0,3,592);
        g.fillRect(0,0,692,3);
        g.fillRect(691,0,3,592);
        //Right paddle position/color
        g.setColor(Color.green);
        g.fillRect(playerX,playerXUP,10,120);
        //Left paddle position/color
        g.setColor(Color.green);
        g.fillRect(playerY,playerYUP,10,120);
        //Ball
        g.setColor(Color.white);
        g.fillOval(ballPosX,ballPosY,20,25);
        //Score right paddle
        g.setColor(Color.RED);
        g.setFont(new Font("serif",Font.BOLD,20));
        g.drawString("PLAYER2: " + scoreRight,525,30);
        //Score left paddle
        g.setColor(Color.RED);
        g.setFont(new Font("serif",Font.BOLD,20));
        g.drawString("PLAYER1: " + scoreLeft,40,30);
        g.dispose();
    }
    @Override
    public void actionPerformed(ActionEvent actionEvent)
    {
        timer.start();
        if(play)
        {
            if(new Rectangle(ballPosX,ballPosY, 20,25).intersects(new Rectangle(playerX, playerXUP,10,120)))
            {
                ballXdir=-ballXdir;
            }
            else if(new Rectangle(ballPosX,ballPosY, 20,25).intersects(new Rectangle(playerY, playerYUP,10,120)))
            {
                ballXdir=-ballXdir;
            }
            ballPosX += ballXdir;
            ballPosY += ballYdir;
            //For top border
            if(ballPosY < 0)
            {
                ballYdir =- ballYdir;
            }
            //For lower border
            if(ballPosY>540)
            {
                ballYdir =- ballYdir;
            }
               if(ballPosX<0)
            {
                    play=true;
                    ballPosX = 350;
                    ballPosY = 230;
                    ballXdir=+1;
                    ballYdir=+2;
                    scoreRight+=1;
                    playerX=670;
                    playerY=10;
                    repaint();
            }
             if(ballPosX>670)
            {
                    play=true;
                    ballPosX = 350;
                    ballPosY = 230;
                    ballXdir=-1;
                    ballYdir=-2;
                    scoreLeft+=1;
                    playerX=670;
                    playerY=10;
                    repaint();
            }
        }
        repaint();
    }
    @Override
    public void keyTyped(KeyEvent keyEvent) {}
    @Override
    public void keyReleased(KeyEvent keyEvent) {}
    @Override
    public void keyPressed(KeyEvent keyEvent)
    {
        if(keyEvent.getKeyCode() == KeyEvent.VK_W)
        {
            if(playerYUP<=8)
            {
                playerYUP=8;
            }
            else
            {
                moveW();
            }
        }
        if(keyEvent.getKeyCode() == KeyEvent.VK_S)
        {
            if(playerYUP>=435)
            {
                playerYUP=435;
            }
            else
            {
                moveS();
            }
        }
        if(keyEvent.getKeyCode()==KeyEvent.VK_DOWN)
        {
            if(playerXUP>=435)
            {
                playerXUP=435;
            }
            else
            {
                moveDOWN();
            }
        }
        if(keyEvent.getKeyCode() == KeyEvent.VK_UP)
        {
            if(playerXUP<=8)
            {
                playerXUP=8;
            }
            else
            {
                moveUP();
            }
        }
    }
    public void moveDOWN()
    {
        play = true;
        playerXUP += 20;
    }
    public void moveUP()
    {
        play = true;
        playerXUP -=20;
    }
    public void moveW()
    {
        play=true;
        playerYUP-=20;
    }
    public void moveS()
    {
        play=true;
        playerYUP+=20;
    }
}
