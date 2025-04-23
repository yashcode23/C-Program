#include<stdio.h>

void StrCpyCap(char *dest , char *src)
{
  while(*src !='\0')
  {
    if((*src>='A')&& (*src<='Z'))
    {
      *dest=*src;
       dest++;
    }
    src++;
  }
  *dest='\0';
}
int main()
{
  char Arr[30]= "Marvellous Multi OS";
  char Brr[30];  // Empty String

  StrCpyCap(Brr,Arr);
  printf("%s",Brr);


  return 0;
}