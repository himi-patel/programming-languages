import java.util.*;

// public class factorial
// {
//     public static void main(String[] args)
//     {
//         int fact=1,i,n=3;

//         for(i=1;i<=n;i++)
//         {
//             fact=fact*i;
//         }
//         System.out.println("factorial: " + fact);
//     }
// }

//taking input
public class factorial
{
    public static void main(String[] args)
    {
        int fact=1,i,n;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to find its factorial : ");
        n = sc.nextInt();

        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        System.out.println("factorial: " + fact);
    }
}