#include<stdio.h>

struct Demo
{
    int *p;  //8
    float *q; //8
    double d; //8

};

int main()
{
   struct Demo obj;
   int i = 11;
   float f = 90.90f;

   obj.p = &i;
   obj.q = &f;
   obj.d = 90.999;
   printf("%d\n",*(obj.p));
   printf("%d\n",*(obj.q));

   return 0;
}