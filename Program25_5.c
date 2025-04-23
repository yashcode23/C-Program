#include<stdio.h>

void Reverse(char *str)
{
  char *start = str;
  char *end = str;
  char temp;
  
  while (*end !='\0')
  {
    end++;
  }
  end--;

  while(start<end)
  {
    temp = *start;
    *start =*end;
    *end=temp;

    start++;
    end--;
  }
   
}
int main()
{ 
    char Arr[100];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);
    printf("Reverse string is : %s\n",Arr);
    
    return 0;
}