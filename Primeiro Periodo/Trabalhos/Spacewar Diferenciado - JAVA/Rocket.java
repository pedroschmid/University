import greenfoot.*;

public class Rocket extends Actor
{
    private int targetx=0, targety=0;
    private int jeda = 0;
    private boolean toRemove = false;
    
    public void addToWorld(World MyWorld){
        targetx = getX();
        targety = getY();
    }
    
    public void Hancur(){
        for(int i = 0; i < 10; i++){
            int px = -20 + Greenfoot.getRandomNumber(40);
            int py = -20 + Greenfoot.getRandomNumber(40);
            getWorld().addObject(new Pecahan(getImage()),getX()+px,getY()+py);
        }
        getWorld().addObject(new Budaran(), getX(), getY());
        toRemove = true;
    }
    
    public void move(){
        int posx = 0, posy = 0;
        if(Greenfoot.isKeyDown("w"))
            posy = -5;
        if(Greenfoot.isKeyDown("s"))
            posy = 5;
        if(Greenfoot.isKeyDown("s"))
            posx = -5;
        if(Greenfoot.isKeyDown("d"))
            posx = 5;
        setLocation(getX()+posx, getY()+posy);
    }
    public void act() 
    {
        if(Greenfoot.mouseMoved(null)){
            MouseInfo mouse = Greenfoot.getMouseInfo();
            targetx = mouse.getX();
            targety = mouse.getY();
        }
        move();
        if(jeda > 0)
            jeda--;
        if(jeda == 1)
            getWorld().addObject(new Laser(), getX()+100, getY());
        if(jeda == 0)
            jeda = 5;
        if(toRemove)getWorld().removeObject(this);
    }    
}
