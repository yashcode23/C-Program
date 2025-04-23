#include<stdio.h>

#pragma Demo(1)
struct Demo
{
    int no;
    float f;
    int x;
    
};
int main()
{ 
    struct Demo obj1;
    struct Demo obj2;
    obj1.no = 11;
    obj1.f = 10.5;
    obj1.x = 21;
    
    obj2.no =51;
    obj2.f = 50.5;
    obj2.x = 101;

    printf("size of structure is %d\n",sizeof(obj1));
    printf("size of structure is %d\n",sizeof(obj2));
    return 0;
}