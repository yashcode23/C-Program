#include<stdio.h>

void StrTogX(char *str)
{
    char temp;
    char *first , *last;
    first = str;
    last = str;
    while(*last != '\0')
    {
        last++;
    }
    last--;
    while (first<=last)
    {
        
       temp=*first;
       *first=*last;
       *last=temp;

       first++;
       last--;
    }
    
}
int main()
{
  char Arr[50] = "Marvellous";
   
   StrTogX(Arr);
   printf("%s",Arr);

    return 0;
}