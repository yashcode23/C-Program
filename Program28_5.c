#include<stdio.h>

void StrCatX(char *dest, char *src)
{
  while(*dest!='\0')
  {
    dest++;
  }
  while(*src !='\0')
  {
    *dest = *src;
    dest++;
    src++;
  }
  *dest='\0';
}
int main()
{
   char Arr[50] = "Marvellous Infosystems";
   char Brr[50] = " Logic Building";
   
   StrCatX(Arr,Brr);

   printf("%s",Arr);
   return 0;
}