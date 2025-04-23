#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a number\n");
    scanf("%d %d ",&a, &b);
    a=b;
    c=a;
    printf("swap is %d %d\n",a,c);
    
    return 0;
        
}