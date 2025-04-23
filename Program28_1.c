#include<stdio.h>

void StrCpyX(char *dest,char *src)
{
  while(*src!='\0')
  {
    *dest=*src;
    src++;
    dest++;
  }
  *dest='\0';
}
int main()
{
  char Arr[30] ="Marvellous Mult OS";
  char Brr[30];   //Empty string

  StrCpyX(Brr,Arr);

  printf("%s",Brr);

    return 0;
}