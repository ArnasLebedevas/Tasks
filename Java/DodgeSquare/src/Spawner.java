import java.util.Random;

public class Spawner
{
    private Handler handler;
    private HealthBar hud;
    public static int scoreKeep = 0;
    private Random r = new Random();

    public Spawner(Handler handler, HealthBar hud)
    {
        this.handler = handler;
        this.hud = hud;
    }
    public void tick()
    {
        scoreKeep++;
        if(scoreKeep >= 500)
        {
            scoreKeep = 0;
            hud.setLevel(hud.getLevel() + 1);
        }

      //  if(hud.getLevel() == 2)
      //  {
       //     handler.addObject(new BasicEnemy(r.nextInt(Game.WIDTH), r.nextInt(Game.HEIGHT), ID.BasicEnemy, handler));
        //}

    }
}
