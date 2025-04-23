#include<stdio.h>

void StrCpyRev(char *dest, char *src)
{ 
    char temp;
    while(src!='\0')
    {
         temp=*src;
        *src=*dest;
        *dest=temp;

        src++;
        dest++;
    }
    *dest='\0';
}
int main()
{
     char Arr [30] = "Marvellous Python";
     char Brr [30]; //Empty string
     
     StrCpyRev(Brr,Arr);
     printf("%s",Brr);
     return 0;
}