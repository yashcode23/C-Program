#include<stdio.h>
#include<stdbool.h>

 bool ChkVowel(char *str)
{
  bool bFlag = false;
  while(*str !='\0')
  {
    if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
    {
      bFlag=true;
      break;
    }
    str++;
  }
 return bFlag;
 
}
int main()
{ 
    char Arr[20];
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    bRet=ChkVowel(Arr);
    if(bRet==true)
    {
      printf("Contains Vowel");
    }
    else
    {
      printf("There is no Vowel");
    }
    
    return 0;
}