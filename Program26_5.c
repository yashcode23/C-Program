#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{ 
    int iSpac = 0;
     while(*str !='\0')
     {
     if(*str==' ')
     {
        iSpac++;
     }
     str++;
     }
   return iSpac;
}
int main()
{
    char Arr[100];
    int iRet =0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
     
    iRet=CountWhite(Arr);
    printf("%d",iRet);

    return 0;
}