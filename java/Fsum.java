import java.util.*;

public class Fsum{
    public static void main(String[]args)
    {
       float sum=0,i;

        System.out.print("sum of ");
        for(i=1;i<=4;i++)
        {
          sum=sum+1/i;
         System.out.print("1/"+i + "\b"+"\b+");
        }
        System.out.println("\b ="+sum);
    }
}