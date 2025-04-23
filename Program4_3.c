#include<stdio.h>

void DisplayNonFact(int iNo)
{
  int i = 0;

  for(i=1;i<=iNo;i++)
  {
    if(iNo % i != 0)
    {
      printf("%d ",i);
    }
  }
}
int main()
{
  int iValue = 0;

  printf("Enter Number\n");
  scanf("%d",&iValue);

  DisplayNonFact(iValue);

  return 0;
}