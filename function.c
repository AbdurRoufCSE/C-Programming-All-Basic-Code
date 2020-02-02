#include<stdio.h>
void sum (int a , int b,int c)
{
printf("The sum is = %d \n",a+b+c);
}

void sub(int a, int b)
{
    printf("The sub is =%d\n",a-b);

}

 square(int a)
{

return a*a;

}

int main()
{
    int n,num;

  sub(20,10);
 sum(50,60,40);
 sum(10,20,30);
 sum(100,200,300);

 printf("Enter any number :");
scanf("%d",&n);

int result=square(n);
 printf("The square is = %d\n",result);




}

