#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
  if((ch>=33) && (ch<=42))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);
    
    bRet=ChkSpecial(cValue);
    if(bRet==true)
    {
        printf("It is special Character");
    }
    else
    {
      printf("It is not a special Character");
    }

    return 0;
}