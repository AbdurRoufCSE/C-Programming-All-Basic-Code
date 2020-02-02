#include<stdio.h>


//Return_type function name (arguments)
int sum (int a, int b,int c)
{
    return a+b+c;
}

int main ()
{

   int result =sum(5,6,5);
int   resul=sum(10,20,20);

    printf("The sum is : %d\n",result);
    printf("The sum =%d\n",resul);
    return 0;
}
