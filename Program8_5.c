#include<stdio.h>

 double SquareMeeter(int iValue )
 {
    double dMeter = 0.0f;
    dMeter = iValue*0.09290;
    return dMeter;
 }
int main()
{
    int iValue = 0;
    double dRet = 0;
    printf("Enter area in Square feet\n");
    scanf("%d",&iValue);
    dRet = SquareMeeter(iValue);
    printf("%f",dRet);

    return 0;
}