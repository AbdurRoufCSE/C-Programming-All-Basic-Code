#include<stdio.h>
int main ()
{
    int row,col,n;
    printf("Enter N =");
    scanf("%d",&n);



       for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("c");
        }
         printf("\n");
    }

    for(row=1; row<=n+5; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("c");
        }
         printf("\n");
    }





    return 0;
}
