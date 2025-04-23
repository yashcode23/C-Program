#include<stdio.h>

#pragma pack(8)
struct Demo
 {
    int i;
    char ch;
    float f;
    double d;
    
 };

int main()
{
    struct Demo obj;

    printf("Size of object is : %lu\n",sizeof(obj));

    return 0;
}