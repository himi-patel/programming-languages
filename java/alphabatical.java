import java.util.*;
public class alphabatical{
public static void main(String args[]) 
{
    Scanner sc= new Scanner(System.in);
    System.out.println("enter string=");
    String s1=sc.nextLine();


    char c[]=s1.toCharArray();

    Arrays.sort(c);

    String SortedArray=new String(c);

    System.out.println("Sorted array is="+SortedArray);

    
}
}