import java.util.*;

class DigitX
{
  public int SumDigits(int iNo)
  {
    int iDigits = 0;
    int iSum = 0;
  
    
    while (iNo != 0) 
    {
      iDigits = iNo % 10;
      iSum = iDigits + iSum;
      iNo = iNo / 10;
    }
    return iSum;
  }
}

class program89
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    DigitX dobj = new DigitX();

    int iValue = 0;
    int iRet = 0;

    System.out.println("Enter number : ");
    iValue = sobj.nextInt();
    
    iRet = dobj.SumDigits(iValue);

    System.out.println("Number of digit : "+iRet);
  }
}