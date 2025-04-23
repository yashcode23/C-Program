#include<stdio.h>

int CountChar(char *str,char ch)
{
   int iFreqeuncy = 0;
   while (*str!='\0')
   {
    if(*str==ch)
    {
      iFreqeuncy++;
    }
    str++;
   }
 return iFreqeuncy;
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

    iRet=CountChar(Arr,cValue);
    printf("character frequncy is %d",iRet);

    return 0;
}