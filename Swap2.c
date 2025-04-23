#include<stdio.h>

int main()
{
    int a = 0 , b = 0, c = 0;
    printf("Enter the number\n");
    scanf("%d %d", &a , &b);
    
    printf("Before swap %d %d\n",a,b); 
     c = a;
     a = b;
     b = c;
    printf("After swap %d %d\n",a,b);

    return 0;
}