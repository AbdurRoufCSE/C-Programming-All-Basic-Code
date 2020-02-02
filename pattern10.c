#include<stdio.h>
int main()

{
    int row,i,j;
    printf("Enter the number of Row :");
    scanf("%d",&row);


     for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
            printf(" ");
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }

     for(i=row-1; i>=1; i--)
    {
        for(j=1; j<=row-i; j++)
            printf(" ");
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }






    for(i=row; i>=1; i--)
    {
        for(j=1; j<=row; j++)
        {

        if (j<=row-i)
        printf(" ");
        else
        printf("*");

        }
        printf("\n");
    }

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row; j++)
        {

        if (j<=row-i)
        printf(" ");
        else
        printf("*");

        }
        printf("\n");
    }


    return 0;
}


