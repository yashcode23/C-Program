#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
  int i =0;
  bool  bFlag = false;

  for(i=0;i<iLength;i++)
  {
    if(Arr[i]==11)
    {
      bFlag = true;
      break;
    }  
  }
  return bFlag;
}
int main()
{
    int iSize = 0, iCnt = 0;
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
    bRet=Check(p,iSize);
    if(bRet==true)
    {
      printf("11 is present");
    }
    else
    {
      printf("11 is absent");
    }   
    free(p);

    return 0;
}