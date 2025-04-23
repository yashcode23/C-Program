#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
  int i =0;
  int iFrequency;

  for(i=0;i<iLength;i++)
  {
    if(Arr[i]==11)
    {
      iFrequency++;
    }
  }
  return iFrequency;
}
int main()
{
    int iSize = 0, iCnt = 0;
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
    iRet=Frequency(p,iSize);
    printf("%d",iRet);  
    free(p);

    return 0;
}