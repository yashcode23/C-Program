#include<stdio.h>

int Factorial(int iNo)
{
  static int iFact = 1;
  static int i = 1;
  if(i<=iNo)
  {
    iFact = iFact * i;
    i++;
    Factorial(iNo);
  }
  return iFact;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter tne value\n");
  scanf("%d",&iValue);

  iRet = Factorial(iValue);
  printf("Factorial is : %d ",iRet);
  return 0;
}