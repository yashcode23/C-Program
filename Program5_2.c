#include<stdio.h>
// Time Complexity :0(N)

void Pattern(int iNo)
{
 int iCnt =0;
 if(iNo<0)
 {
    iNo=-iNo;
 }
 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
    printf("%d\t",iCnt);
 }
 printf("\n");
}
int main()
{
    int iValue =0;

    printf("Enter number \n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}