#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkAlpha(char ch)
{
    if(((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')))
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

    bRet=ChkAlpha(cValue);
    if(bRet==TRUE)
    {
         printf("It is Character");
    }
    else
    {
         printf("It is not Character");
    }

    return 0;
}