#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
    if((ch>='A') && (ch<='Z'))
    {
        return TRUE;   
    }
    else
    {    
      return FALSE;
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=ChkCapital(cValue);
    if(bRet==TRUE)
    {
         printf("It is Capital");
    }
    else
    {
         printf("It is not Capital");
    }

    return 0;
}