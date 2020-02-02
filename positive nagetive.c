
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the integer number :");
    scanf("%d",&a);

    if(a>0)
        printf("positive");
    else if(a<0)
        printf("negative");
        else
            printf("Number is zero ");
    return 0;

}
