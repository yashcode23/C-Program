#include<stdio.h>

void Dispaly(int iNo)
{
  int iCnt = 0;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
   
    printf("*\t",iCnt);
    
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
   
    printf("#\t",iCnt);
}

}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    Dispaly(iValue);

    return 0;
}