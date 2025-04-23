#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Primary School Portal:\n");

    printf("Enter your division:\n");
    scanf("%d",&standard);
    if(standard == 1)
    {
        printf("Your exam is at 1PM\n");
    }
    else if (standard == 2)
    {
        printf("Your exam is at 2 PM\n");

    }
    else if(standard == 3)
    {
        printf("Your exam is at 3 PM\n");

    }
    else if(standard==4)
    {
       printf("Your exam is at 4PM\n");
    }
    else
    {
      printf("Invalid statement\n");
    }
    
    return 0;

}