
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the three value in equation a b c : ");
    scanf("%d%d%d",&a,&b,&c);
    float x1,x2;
    x1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("X1 = %.2f\n",x1);
    printf("X2 = %.2f\n",x2);
    return 0;

}



