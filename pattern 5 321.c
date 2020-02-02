#include<stdio.h>
int main ()
{
    int n, col, row;
    printf("Enter N=");
    scanf("%d",&n);
    for(row=n; row>=1; row=row-1)
    {
        for(col=1; col<=row; col=col+1)
        {

            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}

