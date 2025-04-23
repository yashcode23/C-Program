#include<stdio.h>
void Display(int iNo)
{  
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
    printf("*\t");
    iNo--;
    }
    printf("\n");    

}

int main()
{
    int iValue = 0;
     
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}