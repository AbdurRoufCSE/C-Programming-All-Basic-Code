#include<stdio.h>
int main ()
{
    int n, col, row;
    printf("Enter N=");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        printf("\n");
        for(col=1; col<=row; col++)
        {

            printf("$$$ROUF$$$  ");
        }
        printf("\n");
    }

    return 0;
}


