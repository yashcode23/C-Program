#include<stdio.h>

void StrNCatX(char *dest, char *src,int iCnt)
{
    while(*src != '\0')
    {
        dest++;
        src++;
       
    }
    while((*dest!='\0') && (iCnt!=0))
    {
        *dest=*src;
       
        iCnt--;
    }
    *dest='\0';
}
int main()
{
    
    char Arr[50] = "Marvellous Infosystems";
    char Brr[30] = "Logic Bulding";

    StrNCatX(Arr,Brr,5);
    printf("%s",Arr);

    
    return 0;
}