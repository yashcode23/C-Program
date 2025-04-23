#include<stdio.h>

void Display(int iNo,int iFrequency)
{
  int iCnt = 0;
  if(iNo>0)
  {
    iNo = -iNo;
  }
  for(iCnt=1;iCnt<=iFrequency;iCnt++)
  {
    printf("%d",iCnt);
  }
 
}

int main()
{
    int iValue = 0;
    int iCount = 0;
     
    printf("Enter Number \n");
    scanf("%d",&iValue);

    printf("Enter frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
   
    return 0;
}