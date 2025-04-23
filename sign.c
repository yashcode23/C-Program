#include<stdio.h>

int main()
{ 
    int i = 10;
    signed int j = 20;
    signed int k = -30;

    unsigned int a = 40;
   unsigned int b = -40;  //NA 

   int x = 10;           // 10/-   4 bytes
   short int y = 10;     // 8/-    2 bytes 
   long int z = 20;      // 15/-   4/8 bytes

   printf("%d\n",i);
   printf("%d\n",j);
   printf("%d\n",k);
   printf("%d\n",b);
   

   printf("size of x is : %d\n",sizeof(x));
   printf("size of y is : %d\n",sizeof(y));
   printf("size of z is : %d\n",sizeof(z));

   return 0;
}