
//x*x+2x+1
#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the X :");
    scanf("%f",&x);

    y = pow(x,2)+2*x+1;

    printf("Y = %.2f\n",y);
    return 0;

}


