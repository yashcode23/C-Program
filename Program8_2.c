#include<stdio.h>
// Time Complexity :0

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;
    dArea = fWidth*fHeight;
    return dArea;
}
int main()
{
    float fValue1 =0.0 , fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);
    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is %f",dRet);
    return 0;
}