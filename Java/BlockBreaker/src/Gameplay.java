import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.Timer;
import java.awt.Graphics2D;

public class Gameplay extends JPanel implements KeyListener, ActionListener //Extends - pratesia sia klase
// Keylistener naudojamas atpazinti migtukus. ActionListener - kad kamuolys judetu
{
    private boolean play = false;
    private int score = 0;
    private int totalBricks = 14;
    private Timer timer;
    private int delay = 8;
    private int playerX = 310; //Pradzios pozicija
    private int ballposX = 120; // Kamuolio pradzios taskas X
    private int ballposY = 350; // Kamuolio pradzios taskas Y
    private int ballXdir = -1;
    private int ballYdir = -2;

    private MapGenerator map;

    public Gameplay()
    {
        map = new MapGenerator(2,7);
        addKeyListener(this);
        setFocusable(true);
        setFocusTraversalKeysEnabled(false);
        timer = new Timer(delay,this);
        timer.start();
    }
    public void paint(Graphics g)
    {
        //Background
        g.setColor(Color.black);
        g.fillRect(1,1,692,592);
        //Drawing map
        map.draw((Graphics2D)g);
        //Borders
        g.setColor(Color.yellow);
        g.fillRect(0,0,3,592);
        g.fillRect(0,0,692,3);
        g.fillRect(691,0,3,592);
        //Score
        g.setColor(Color.white);
        g.setFont(new Font("serif",Font.BOLD,25));
        g.drawString("SCORE: " + score,530,30);
        //Paddle position/color
        g.setColor(Color.green);
        g.fillRect(playerX,550,100,8);
        //Ball
        g.setColor(Color.yellow);
        g.fillOval(ballposX,ballposY,20,20);
        //END GAME
        if(totalBricks == 0)
        {
            play = false;
            ballXdir = 0;
            ballYdir = 0;
            g.setColor(Color.RED);
            g.setFont(new Font("serif",Font.BOLD,30));
            g.drawString("YOU WON: " + score,260,300);

            g.setFont(new Font("serif",Font.BOLD,20));
            g.drawString("Press Enter To Restart",230,350);
        }
        //If ball goes out of border
        if(ballposY > 570)
        {
            play = false;
            ballXdir = 0;
            ballYdir = 0;
            g.setColor(Color.RED);
            g.setFont(new Font("serif",Font.BOLD,30));
            g.drawString("GAME OVER, SCORE: " + score,190,300);

            g.setFont(new Font("serif",Font.BOLD,20));
            g.drawString("Press Enter To Restart",230,350);
        }
        g.dispose();
    }
    @Override
    public void actionPerformed(ActionEvent actionEvent)
    {
        timer.start();

        if(play)
        {
            //Ball detects paddle
            if(new Rectangle(ballposX, ballposY, 20,20).intersects(new Rectangle(playerX, 550,100,8)))
            {
                //Ball being pushed from paddle
                ballYdir =-ballYdir;
            }
            A: for(int i=0; i<map.map.length; i++)
            {
                for(int j=0; j<map.map[0].length; j++)
                {
                    if(map.map[i][j] > 0)
                    {
                        int brickX = j * map.brickWidth + 80;
                        int brickY = i * map.brickHeight + 50;
                        int brickWidth = map.brickWidth;
                        int brickHeight = map.brickHeight;

                        Rectangle rect = new Rectangle(brickX, brickY, brickWidth, brickHeight);
                        Rectangle ballRect = new Rectangle(ballposX, ballposY, 20, 20);
                        Rectangle brickRect = rect;

                        if(ballRect.intersects(brickRect))
                        {
                            map.setBrickValue(0, i , j);
                            totalBricks--;
                            score += 5;
                            if(ballposX + 19 <= brickRect.x || ballposX + 1 >= brickRect.x + brickRect.width)
                            {
                                ballXdir =- ballXdir;
                            }
                            else
                            {
                                ballYdir =- ballYdir;
                            }
                            break A;
                        }
                    }
                }
            }
            ballposX += ballXdir;
            ballposY += ballYdir;
            //For left border
            if(ballposX < 0)
            {
                ballXdir =- ballXdir;
            }
            //For top border
            if(ballposY < 0)
            {
                ballYdir =- ballYdir;
            }
            //For right border
            if(ballposX > 670)
            {
                ballXdir =- ballXdir;
            }
        }
        repaint();
    }
    @Override
    public void keyTyped(KeyEvent keyEvent) { }
    @Override
    public void keyReleased(KeyEvent keyEvent) { }
    @Override
    public void keyPressed(KeyEvent keyEvent)
    {
        if(keyEvent.getKeyCode() == KeyEvent.VK_RIGHT)
        {
            if(playerX >= 600)
            {
                playerX = 600;
            }
            else
            {
                moveRight();
            }
        }
        if(keyEvent.getKeyCode() == KeyEvent.VK_LEFT)
        {
            if(playerX < 10)
            {
                playerX = 10;
            }
            else
            {
                moveLeft();
            }
        }
        if(keyEvent.getKeyCode()== KeyEvent.VK_ENTER)
        {
            if(!play)
            {
                play=true;
                ballposX=120;
                ballposY=350;
                ballXdir=-1;
                ballYdir=-2;
                playerX=310;
                score=0;
                totalBricks=21;
                map= new MapGenerator(2,7);

                repaint();
            }
        }
    }
    public void moveRight()
    {
        play = true;
        playerX += 20;
    }
    public void moveLeft()
    {
        play = true;
        playerX -= 20;
    }
}
