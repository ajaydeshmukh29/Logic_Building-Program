// Input : 7
// Output : 1 * 2 * 3 * 4 
// iCnt   : 1 2 3 4 5 6 7 

import java.util.*;

public class program179
{
  public static void Display(int iNO)
  {
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
      
      System.out.print(ch+"\t");
      ch++;
    }
    System.out.println();
  }

  public static void main(String[] args) 
  {
       Scanner sobj = new Scanner(System.in);
       int iValue = 0;

       System.out.println("ente the number : ");
       iValue = sobj.nextInt();

       Display(iValue);
  }
  
}