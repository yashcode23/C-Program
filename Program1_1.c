#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo1%iNo2)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}
int main()
{

    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;
    iRet = Divide(15,5 );
    printf("Division is %d\n",iRet);
    return 0;
}