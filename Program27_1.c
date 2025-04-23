#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    bool bFlag = FALSE;
   while (*str!='\0')
   {
    if(*str==ch)
    {
      bFlag=TRUE;
      break;
    }
    str++;
   }
  return bFlag;   
}
int main()
{
    char Arr[100];
    char cValue ;
    BOOL bRet = FALSE;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

    bRet=ChkChar(Arr,cValue);
    if(bRet==TRUE)
    {
        printf("Character found");
    }
    else
    {
       printf("Character not found");
    }

    return 0;
}