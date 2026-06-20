#include<iostream>
using namespace std;

#pragma pack()

class ArrayX
{
  public :
  int *Arr;
  int iSize;

  ArrayX(int X)
  {

  }
};

int main()
{
  ArrayX aobj(5);

  cout<<sizeof(aobj)<<endl;

  return 0;
}