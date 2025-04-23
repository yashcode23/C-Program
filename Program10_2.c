#include<stdio.h>
#include<stdbool.h>

 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

 BOOL ChkZero(int iNo)
 {
  int iDigit = 0;
  bool bflag = false;
  while(iNo != 0)
  {
   iDigit = iNo % 10;
   if(iDigit == 0)
   {
    bflag = true;
    break;
   }
   iNo = iNo / 10;
  }
  return bflag;
 }
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==TRUE)
    {
      printf("It Contains Zero");
    }
    else
    {
      printf("There is no Zero");
    }

    return 0;
}