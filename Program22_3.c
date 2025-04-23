#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[],int iLength)
{
    int iDigit = 0;
    int i = 0;
    int iNo = 0;
    for(i=0;i<iLength;i++)
    {
        iNo = Arr[i];
        while(iNo!=0)
        {
            iDigit = iNo % 10;
            printf("%d\n",iDigit);
            iNo = iNo /10;
        }
    }

}
int main()
{
    int iSize = 0,  iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

   
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
   
    Digit(p,iSize);
    
    free(p);

    return 0;

}