#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int Value1 = 0, Value2 = 0;
    int Ret = 0;

    printf("Enter first number : ");
    scanf("%d",&Value1);

    printf("Enter second number : ");
    scanf("%d",&Value2);

    Ret = Addition(Value1,Value2);
    printf("Addition is : %d",Ret);

    return 0;
}