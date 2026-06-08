#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
  int iCnt = 0;

  printf("Elements of the array of : \n");

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }
}

int main()
{
  int *Brr = NULL;
  int iLength = 0, iCnt = 0;

  // Step 1 : Accept the number elements
  printf("Number of elements : \n");
  scanf("%d",&iLength);

  // Step 2 : Allocate the memory 
  Brr = (int *)malloc(iLength * sizeof(int));

  // Step 3 : Accept the value form user

  printf("Enter the element : \n");
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  // Step 4 : Use the memory (LOGIC)
  Display(Brr,iLength);

  // Step 5 : Deallocate the memory
  free(Brr);

  return 0;
}