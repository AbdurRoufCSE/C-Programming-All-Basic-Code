#include<stdio.h>

    void pow( float base,float exp)
    {

     float i,result=1;
    for(i=1 ;i<=exp; i++)
    {

     result=result*base;


    }

    printf("Result is = %.2f\n",result);
    }

int main()
{
    float base,exp;
printf("Enter base :");
    scanf("%f",&base);

    printf("Enter exponent :");
    scanf("%f",&exp);

        pow(base,exp);//2,4,8,16



    return 0;
}
