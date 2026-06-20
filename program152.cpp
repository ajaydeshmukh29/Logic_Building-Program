#include<iostream>
using namespace std;

class ArrayX
{
  public:

  int Summation(int Arr[], int iSize)
  {
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
      iSum = iSum + Arr[iCnt];
    }
    return iSum;
  }
};

int main()
{
  int *Brr = NULL, iLenght = 0, iCnt = 0, iRet = 0;
  
  ArrayX aobj;

  cout<<"Enter the number of elements : \n";
  cin>>iLenght;

  Brr = new int[iLenght];  //memory allocation
  
  cout<<"Enter the elements : \n";

  for(iCnt = 0; iCnt < iLenght; iCnt++)
  {
    cin>>Brr[iCnt];
  }

  cout<<"Element of the array are : \n";
  for(iCnt = 0; iCnt < iLenght; iCnt++)
  {
    cout<<Brr[iCnt]<<endl;
  }

  iRet = aobj.Summation(Brr,iLenght);

  cout<<"Summation is : "<<iRet<<endl;

  delete []Brr;

  return 0;
}