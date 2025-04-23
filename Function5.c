#include<stdio.h>

int Multiplication(int Data1 , int Data2)
{
    int Multiplication;
    Multiplication= Data1*Data2;
    return Multiplication;
}
int main()
{
    int value1 = 12;
    int value2 = 21;
    int Mul = 0;
    
    Mul=Multiplication(value1,value2);
    printf("Multiplication is : %d",Mul);
    
    return 0;
}