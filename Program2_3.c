#include<stdio.h>
int Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }  

}

int main()
{
    int iValue = 0;
     
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}