#include<stdio.h>
#include<string.h>

 int strlenX(char *str)
 {
    static int iCount = 0;

    if(*str!='\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
    return iCount;
 }
int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter String:\n");
  scanf("%[^'\n']s",Arr);

  iRet=strlenX(Arr);
  printf("Length is %d",iRet);

  return 0;
}