#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[] , int iSize)
{
  int i = 0;
  int iSum = 0;
  for(i=0;i<iSize;i++)
  {
    iSum = iSum + Arr[i];
  }
  return iSum;

}
int main()
{
    int *Brr =NULL;
    int iCout = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number that you want : \n");
    scanf("%d",&iCout);

    Brr= (int*)malloc(iCout*(sizeof(int)));

    printf("Enter the numbers : \n");
    for(i=0;i<iCout;i++)
    {
        scanf("%d",&Brr[i]);
    }
    iRet= Addition(Brr,iCout);
    printf("%d",iRet);

    return 0;
}