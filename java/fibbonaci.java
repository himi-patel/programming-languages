
 import java.util.*;

 public class fibbonaci
 {

    public static void main(String[] args)

    {
            int x=0,y=1,z;

        for(int i=0;i<25;i++)
        {
            z=x+y;
            x=y;
            y=z;
            System.out.print(z+",");
        }
    }
 }
