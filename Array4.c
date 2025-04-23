#include<stdio.h>

int main()
{
    int Arr[4] = {11,21,51,101};

    printf("Base address of array : %d\n",Arr);
    printf("Base address of first element of array : %d\n", &(Arr[0]));
    printf("First element is :%d\n",Arr[0]);
    printf("second element is :%d\n",Arr[2]);
    printf("size of whole araay :%d\n",sizeof(Arr));
    printf("size of second element of array :%d\n",sizeof(Arr[1]));

    return 0;
} 