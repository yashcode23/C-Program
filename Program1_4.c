#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE ;
    }
    else
    {
      return FALSE ;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number \n");
    scanf("%d",&iValue);
    bRet = check(iValue);
    if(bRet==TRUE)
    {
        printf("Divisible by 5");

    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}