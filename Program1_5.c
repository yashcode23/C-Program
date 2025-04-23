#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("* \t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
     
    printf("Enter Number that you want dislay * on screen\n");
    scanf("%d",&iValue);

    Accept(iValue);
   
    return 0;
}