#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Primary School Portal:\n");

    printf("Enter your division:\n");
    scanf("%d",&standard);

   switch(standard)
   {
     case 1:
     printf("Your exam is at 1 PM\n");
     break;

    case 2:
    printf("Your exam is at 2 PM\n");
    break;

    case 3:
    printf("Your exam is at 3 PM\n");
    break;

    case 4:
    printf("Your exam is at 4 PM\n");
    break;

    default:
    printf("invalid standard\n");
    break;
    }

    return 0;

}