import greenfoot.*;  

public class Enemy extends Actor
{
    private int vx = 0;
    private boolean toRemove = false;
    
    public Enemy(){
        
    }
    
    public Enemy(int v){
        vx = v;
    }
    
    public void addedToWorld(World MyWorld){
        setRotation(180);
    }
    
    public void move(){
        setLocation(getX() + vx, getY());
        Actor actor = getOneIntersectingObject(Rocket.class);
        if(actor != null){
            ((Rocket)actor).Hancur();
            Hancur();
        }
        Actor actor2 = getOneIntersectingObject(Rocket2.class);
        if(actor2 != null){
            ((Rocket2)actor2).Hancur();
            Hancur();
        }
        if(getX() < -200)
            toRemove = true;
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
    
    public void act(){
        if(!toRemove)
            move();
        else
            getWorld().removeObject(this); 
    }    
}
