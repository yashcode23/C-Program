#include<stdio.h>

int main()
{
 char *cptr;
 int *iptr;
 float *fptr;

 printf("Pointer to character takes %f bytes\n",sizeof(cptr)); 
 printf("Pointer to integer takes %d bytes\n",sizeof(iptr));
 printf("Pointer to float takes %d bytes\n",sizeof(fptr));
 
 return 0;

}