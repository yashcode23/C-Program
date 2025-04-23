#include<stdio.h>

int main()
{
    int age = 0;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You  eligible to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }
    return 0;
}