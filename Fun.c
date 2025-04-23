#include<stdio.h>

int Addition(int i , int j )
{
  int sum = 0;
  sum = i + j;
  return sum;
}

int main()
{
    int A = 12;
    int B = 12;
    int Ans = 0;

    Ans = Addition(A,B);
    
    printf("Addition is : %d\n",Ans);

    return 0;
}