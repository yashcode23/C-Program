#include<stdio.h>

int Addition(int No1, int No2)
{
    int sum = 0;
    sum = No1 + No2;
    return sum;
}
int main()
{
    
    int value1 = 10;
    int value2 = 11;
    int Ans = 0;
    Ans = Addition(value1,value2);
    printf("Addition is : %d\n",Ans);
    
    return 0;

}