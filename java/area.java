import java.util.*;

// public class area{

//     public static void main(String[] args)
//     {
//         double pi=3.14,r=4,area;

//         area=2*pi*r*r;
//         System.out.println("area of circle is="+area);

//     }
// }

//taking input

public class area{

    public static void main(String[] args)
    {
        double pi=3.14,r,area;

        Scanner s=new Scanner(System.in);
     System.out.print("Enter the radius: ");

        r=s.nextDouble();
        // area=2*pi*r*r;
        area=2*Math.PI*r*r;
        System.out.println("area of circle is="+area);

    }
}

