#include<stdio.h>

void StrCpyCap(char *dest , char *src)
{
  while(*src !='\0')
  {
    if((*src>='a')&& (*src<='z'))
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
  char Arr[30]= "Marvellous multi OS";
  char Brr[30];  // Empty String

  StrCpyCap( Brr,Arr);
  printf("%s",Brr);


  return 0;
}