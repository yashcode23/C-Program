#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
  int i =0;
  int iCount = 1;
  int iPos = 0;
  for(i=0;i<iLength;i++)
  {
   if(Arr[i]==iNo)
   {
    iPos = iCount;
    break;
   }
   iCount++;
  }
  return iPos;
}
int main()
{
 
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;
    
    printf("Enter number of elments\n");
    scanf("%d",&iSize);
    p =(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("Enter element that you find first occurence\n");
    scanf("%d",&iValue);

    iRet=FirstOcc(p,iSize,iValue);
    if(iRet==-1)
    {
        printf("There is no such number");
    }
    else
    {
       printf("First occurence of number is %d",iRet);
    }
    free(p);

    return 0;
}