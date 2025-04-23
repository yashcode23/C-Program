#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
  int i =0;
  bool bFlag = false;

  for(i=0;i<iLength;i++)
  {
   if(Arr[i]==iNo)
   {
    bFlag=true;
    break;
   }
  }
  return bFlag;
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;
    
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
    printf("Enter element that you want to search\n");
    scanf("%d",&iValue);
    bRet=Check(p,iSize,iValue);
    if(bRet==true)
    {
     printf("Number is present");
    }
    else
    {
     printf("Number is absent");
    }  
    free(p);

    return 0;
}