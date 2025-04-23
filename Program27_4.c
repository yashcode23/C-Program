#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str,char ch)
{
  int iCnt = 1, iPos = -1;
  
  while(*str!='\0')
  {
    if(*str==ch)
    {
     iPos=iCnt;
    }
  iCnt++;
  str++;
}
return iPos;
}
int main()
{
    char Arr[100];
    char cValue ;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

    iRet=LastChar(Arr,cValue);
    if(iRet == -1)
    {
        printf("Thre is no such Letter\n");
    }
    else
    {
       printf("Last ocuurence at Location %d",iRet);
    }

    return 0;
}