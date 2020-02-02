#include<stdio.h>
int main ()
{
  int a,b,c,d,e,f,g,h,i,j;
  printf("Enter the five numbers :");
  scanf("%d",&a);

  b=a%10;
  c=a/10;
  d=c%10;
  e=c/10;
  f=e%10;
  g=e/10;
  h=g%10;
  i=g/10;
  j=i%10;

  printf("The rivers number is = %d%d%d%d%d",b,d,f,h,j);

    return 0;
}

