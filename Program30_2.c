#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool StrCmpX(char *dest, char *src)
{ 
    while((*src!='\0') && (*dest!='\0'))
    {
       if(*src!=*dest)
       {
        break;
       }
       src++;
       dest++;
    }
   if((*src=='\0') && (*dest =='\0'))
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
    char Arr[50] = "Demo";
    char Brr[50] = "Demo";
    bool bRet = false;

    bRet = StrCmpX(Brr,Arr);
    if(bRet==true)
    {
        printf("String are equal");
    }
    else
    {
      printf("String are not equal");
    }
    
    return 0;
}