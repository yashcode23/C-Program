#include<stdio.h>
int main()
{
    int a = 0 , b = 0;
    printf("Enter the number\n");
    scanf("%d %d",&a , &b);
    printf("Number before swap %d %d\n" , a,b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("Number after swap %d %d\n",a,b);
    return 0;
}