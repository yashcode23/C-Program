#include<stdio.h>

struct Demo
{
   int i;
   float f;
   struct Hello
   {
    int no;
    float d;
   };

}dobj;

int main()
{
   printf("Size of object is :%d\n",sizeof(dobj));

   return 0;
}