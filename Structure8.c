#include<stdio.h>

 struct Hello
   {
    int no;
    float d;
   };

struct Demo
{
   int i;
   float f;
   struct Hello hobj;
  

}dobj;

int main()
{
   dobj.i = 11;
   dobj.f = 90.99;

   dobj.hobj.no = 21;
   dobj.hobj.d = 90.88;

   printf("Size of object is :%d\n",sizeof(dobj));
   printf("%d\n",dobj.i);
   printf("%d\n",dobj.f);
   printf("%d\n",dobj.hobj.no);
   printf("%d\n",dobj.hobj.d);


    return 0;
}