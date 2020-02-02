#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the three number : \n");
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("\nA is largest number ");
    else if(b>c && b>a)
        printf("\nB is largest number ");
     else if(c>a && c>b)
        printf("\nC is largest number ");
    else
        printf("\nThe three number is equal");

    getch();
}
