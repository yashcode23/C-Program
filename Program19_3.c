#include<stdio.h>
#include<stdlib.h>

void Display(int iSize,int *Arr)
{
  int i = 0;
  printf("Even Number and Divisible by 5 are\n");
  for(i=0;i<iSize;i++)
  {
    if(Arr[i] % 2==0) 
    {
     printf("%d\n",Arr[i]);
    }
    else if((Arr[i] % 5==0))
    {
      printf("%d\n",Arr[i]);
    }
  }
}
int main()
{
int *Arr = NULL;
int iCount , i = 0;

printf("Enter element that you want\n");
scanf("%d",&iCount);
Arr = (int*)malloc(iCount*(sizeof(int)));

printf("Enter Element : %d\n",iCount);
for(i=0;i<iCount;i++)
{
  scanf("%d",&Arr[i]);
}
Display(iCount,Arr);


  return 0;
}