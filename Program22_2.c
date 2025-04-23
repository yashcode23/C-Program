#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int i =0;
    int iMin = Arr[0];
    for(i=0;i<iLength;i++)
    {
       
        if(Arr[i]<iMin)
        {
          iMin=Arr[i];
        }
    }
    return iMin;

}
int main()
{
    int iSize = 0,  iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Minimum(p,iSize);
    printf("Smallest Number is %d\n",iRet);
    free(p);

    return 0;

}