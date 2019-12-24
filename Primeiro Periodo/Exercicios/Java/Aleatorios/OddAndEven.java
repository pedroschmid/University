package DevDojo;

public class OddAndEven {
    public static void main(String[] args) {
       for (int i = 0; i < 100; i++){
           if (i % 2 == 1){
               System.out.println("Odd = " + i);
           } else {
               System.out.println("Even = " + i);
           }
       }
    }
}
