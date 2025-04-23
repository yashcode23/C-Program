#include<stdio.h>

int Difference(char *str)
{
    int iCntC = 0, iCntS = 0;
  while(*str !='\0')
  {
    if((*str>='A') && (*str<='Z'))
    {
        iCntC++;
    }
    else
    {
         iCntS++;
    }
    str++;
  }
  return (iCntC-iCntS);
}
int main()
{ 
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet=Difference(Arr);
    printf("%d",iRet);
    
    return 0;
}