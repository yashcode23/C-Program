#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str,char ch)
{
  int iCount = 1;
  int iPos = 0;

  while(*str != '\0')
  {
    if(*str==ch)
    {
      iPos = iCount;
      break;
    }
    iCount++;
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

    iRet=FirstChar(Arr,cValue);
    if(iRet == -1)
    {
       printf("Thre is no such Letter\n");   
    }
    else
    {
      printf("Letter ocuur at Location %d",iRet);
    }

    return 0;
}