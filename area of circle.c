#include<stdio.h>
int main ()
{
    float radius,pi,diameter, circumference,area;
    printf("Enter the radius of circle  : ");
    scanf("%f" ,&radius);

    pi = 3.1416;
    diameter = 2*radius;
    circumference = 2*pi*radius;
    area = pi*(radius*radius);

    printf("\nThe diameter is  = %.2f\n",diameter);
    printf("The circumference is = %.2f\n",circumference);
    printf("The area is = %.2f\n",diameter);

    return 0;
}
