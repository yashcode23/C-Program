#include<stdio.h>

int main()
{
    int a = 0;
    int Ans = 0;
    printf("Enter the number\n");
    scanf("%d",&a);
    
    Ans=(a%2);
    if(Ans==1)
    {
        printf("Number is odd\n");
    }
    else
    {
        printf("Number is even\n");
    }

    return 0;
}
