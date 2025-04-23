#include<stdio.h>

void StrNCpyX(char *dest,char *src,int iCnt)
{
  while((*src!='\0') && (iCnt!=0))
  {
    *dest = *src;
    src++;
    dest++;

    iCnt--;
  }
  *dest='\0';
}
int main()
{
  char Arr[30] = "Marvellous Multi OS";
  char Brr[30];  // Empty string

 StrNCpyX(Brr,Arr,10);
 printf("%s",Brr);

  return 0;
}