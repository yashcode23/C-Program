// Input : 5
//        A     B    C      D       E

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    //      1           2          3 
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);    // 3
        ch++;
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);    // Display(4)

    return 0;
}