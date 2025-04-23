#include<stdio.h>

int DollerToINR(int iNo)
{
    int i = 0;
    i = iNo * 84;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);
    printf("Value in INR is %d\n",iRet);
}