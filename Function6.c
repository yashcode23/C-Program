#include<stdio.h>

int Multiplication(int s1,int s2)
{
    int ans = 0;
    ans = s1*s2;
    return ans;
}
int main()
{
    int v1 = 0 ; int v2 = 0;
    int mul = 0;
    printf("Enter first number:\n");
    scanf("%d",&v1);
    printf("Enter second number :\n");
    scanf("%d",&v2);
    
    mul=Multiplication(v1,v2);
    printf("Multiplication is : %d\n",mul);
 
    return 0;

}