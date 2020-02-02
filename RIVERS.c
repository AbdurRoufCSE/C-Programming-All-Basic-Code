#include<stdio.h>
int main ()
{
  int a,r,sum=0,temp;
  printf("Enter the five numbers :");
  scanf("%d",&a);
temp=a;

while(temp!=0)
{
    r=temp%10;
    sum = sum*10+r;
    temp=temp/10;

}

  printf("The rivers number is = %d",sum);

    return 0;
}


