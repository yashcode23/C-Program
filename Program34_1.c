#include<stdio.h>
void Dispaly(int iNo)
{
   static int i = 1;
  if(i<=iNo)
  {
    printf("* ",i);
    i++;
    Dispaly(iNo);
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