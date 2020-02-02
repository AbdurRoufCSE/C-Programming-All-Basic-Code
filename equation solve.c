#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2;
    printf("Enter the mul a b c:");
    scanf("%d%d%d",&a,&b,&c);
   x1=-b+(sqrt(pow(b,2)-4*a*c))/2*a;
    x2=-b-(sqrt(pow(b,2)-4*a*c))/2*a;
    printf("X1 is =%d\n",x1);
    printf("X2 is =%d",x2);
    return 0;


}
