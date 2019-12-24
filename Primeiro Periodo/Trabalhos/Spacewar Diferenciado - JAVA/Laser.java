import greenfoot.*; 
public class Laser extends Actor
{
    private boolean toRemove = false;
    private int vx = 30;
    public void addedToWorld(World MyWorld){
        GreenfootImage image = new GreenfootImage(50,10); //Tamnaho do laser
        image.setColor(Color.YELLOW);
        image.drawLine(10,5,image.getWidth()-1,5);
        setImage(image);        
    }
    public void act() 
    {
        if(!toRemove){
            setLocation(getX()+vx,getY());
            Actor actor = getOneIntersectingObject(Enemy.class);
            if(actor != null){
                ((Enemy)actor).Hancur(); 
            }
            if(getX() > getWorld().getWidth()+200)
                toRemove = true;
        }else{
            getWorld().removeObject(this);
        }
    }    
}
