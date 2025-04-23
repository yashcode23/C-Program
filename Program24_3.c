#include<stdio.h>

void Display(char ch)
{
    char c ='\0';
 for(c=ch;c<='Z';c++ )
 {
    if((ch>='A') && (ch<='Z'))
    {
        printf("%c",c);
    }
 }
 for(c=ch;c>='a';c-- )
 {
    if((ch>='a')&&(ch<='z'))
    {
        printf("%c",c);
    }
 }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}