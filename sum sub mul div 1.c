#include<stdio.h>
int main()
{
    float a, b,sum,sub, mul, div;

    printf("Enter the two sum  number :");
    scanf("%f %f",&a,&b );
    sum = a + b;
    printf("The sum is = %.2f\n ",sum);

    printf("\nEnter the two sub number :");
    scanf("%f %f",&a,&b );
    sub = a - b;
    printf("The sub is  = %.2f\n",sub);

    printf("\nEnter the two mul  number :");
    scanf("%f %f",&a,&b );
    mul = a * b;
    printf("The mul is = %.2f\n",mul);

    printf("\nEnter the two div  number :");
    scanf("%f %f",&a,&b );
    div = a / b;
    printf("The div is  = %.2f\n",div);

    return 0;


}
