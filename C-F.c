
#include<stdio.h>
int main()
{
    float c,f;
    printf("Temperature in Celsius : ");
    scanf("%f",&c);

    f =(c*9)/5+32;
    printf("Fahrenheit Temperature is : %.2f\n",f);

    return 0;

}

