#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the integer number :");
    scanf("%d",&a);

    if(a%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;

}