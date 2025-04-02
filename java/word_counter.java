import java.util.*;
public class word_counter{
public static void main(String args[]) 
{
   Scanner sc=new Scanner(System.in);
  System.out.print("enter text=");
  String text=sc.nextLine();

  System.out.print("enter word=");h
  String word_count=sc.next();

int count=countwrd(text,word_count);

System.out.println("The word " + word_count +" appears "+count+" times in the given text");

}

public static int countwrd(String text,String word_count)
{
    int count=0;
    int index=0;

    while((index=text.indexOf(word_count,index))!= -1)
    {
        count++;
        index+=word_count.length();
    }

    return count;


}



}

