#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{ 
   int i , j = 0;
   if(iStart>=iEnd)
   {
    printf("%d %d",iStart,iEnd);
   }
  else
  {
    printf("Invalid Range");
  }
   
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}