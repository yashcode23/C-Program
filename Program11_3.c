#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo>0)
    {
    iDigit = iNo%10;
    iNo=iNo/10;
    if((iNo>=3) && (iNo<=7))
    {
     iCount++;
    }
  }
  return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);
    
    return 0;
}