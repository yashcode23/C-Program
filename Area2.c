#include<stdio.h>

int main()
{
    float Radius = 0.0f;
    float Circumference = 0.0f;
    float Area = 0.0f;
    const float PI = 3.14f;
    printf("Enter the size of circle\n");
    scanf("%f",&Radius);
    Circumference = 2 * 3.14f * Radius*Radius;
    Area = 3.14 * Radius * Radius;
    printf("Circumference & Area of circle is : %f %f\n",Circumference,Area);
    return 0;
}