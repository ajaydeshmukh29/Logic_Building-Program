// Input = 7
// Output = A 2 C 4 E 6 G
// iCnt =   1 2 3 4 5 6 7

import java.util.*;

public class program186
{
  public static void Display(int iNO)
  {
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNO; iCnt++)
    { 
      if(iCnt % 2 == 0)
      {
        System.out.print(iCnt+"\t");
      }
      else
      {
        System.out.print(ch+"\t");
        ch++;
      }

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