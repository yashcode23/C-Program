#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
  int i = 0;
  int j = 0;
  int iSum1 = 0;
  int iSum2 = 0;
  
  for(i=0;i<iLength;i++)
  {
    if((Arr[i]%2)==0) 
    {
       iSum1 = iSum1 + Arr[i]; 
    }
    else if((Arr[i]%2)!=2)
    {
      iSum2 = iSum2 + Arr[i];
    }   
  }
  return (iSum2-iSum1);
}
int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
    int *p = NULL;
    
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
    iRet=Difference(p,iSize);
    
    printf("Result is : %d\n",iRet);
    free(p);

    return 0;
}