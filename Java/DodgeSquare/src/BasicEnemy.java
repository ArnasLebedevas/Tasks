import java.awt.*;

public class BasicEnemy extends GameObject
{
    private Handler handler;
    public BasicEnemy(int x, int y, ID id, Handler handler)
    {
        super(x, y, id);
        this.handler=handler;
        speedX=5;
        speedY=5;
    }
    public Rectangle getBounds()
    {
        return new Rectangle(x, y,16,16);
    }
    public void tick()
    {
        x+=speedX;
        y+=speedY;

        if(y <= 0 || y >= Game.HEIGHT - 50) speedY *= -1;
        if(x <= 10 || x >= Game.WIDTH - 30) speedX *= -1;

        handler.addObject(new Trail(x,y,ID.Trail,Color.red,16,16,0.01f,handler));
    }

    @Override
    public void render(Graphics g)
    {
        g.setColor(Color.RED);
        g.fillRect(x, y,16,16);
    }
}
