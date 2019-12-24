import greenfoot.*;

public class MyWorld extends World
{
    private int jeda = 0;
    public MyWorld()
    {    
        super(600, 400, 1, false);
        addObject(new Rocket(), 100, 200);
        prepare();
    }

    public void act(){
        if(jeda > 0)
            jeda--;
        else
            jeda = 15; //Nv de inimgos spawnados
        if(jeda == 1){
            int py = Greenfoot.getRandomNumber(getHeight());
            addObject(new Enemy(-(2+Greenfoot.getRandomNumber(3))), getWidth()+200,py);
        }

    }
    /**
     * Prepare the world for the start of the program.
     * That is: create the initial objects and add them to the world.
     */
    private void prepare()
    {
        Rocket2 rocket2 = new Rocket2();
        addObject(rocket2,114,328);
    }
}
