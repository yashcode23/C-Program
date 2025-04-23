#include<stdio.h>

int main()
{
    char ch = 'A';
    int i =11;
    float f = 90.99f;
    double d = 90.88;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%d",&ip);
    
    return 0;
}