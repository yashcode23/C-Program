#include<stdio.h>
int Display()
{ 
    int i = 5;
    while(i>0)
    {
        printf("%d ", i );
        i--;
    }
}
int main()
{
    Display();
    return 0;
}