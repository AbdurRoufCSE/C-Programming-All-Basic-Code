#include<stdio.h>
int main()
{
    int a[10][10],i,j,n1,n2;
    int b[10][10];
    int c[10][10];
    printf("Enter the  number of row and col : ");
    scanf("%d%d",&n1,&n2);
    printf("\nEnter element for A matrix :\n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }


    printf("Enter element for B matrix :\n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);

        }
        printf("\n");

    }

    printf("A = ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nB = ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nA + B =\n");

    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf("%d ",c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }


     printf("\nA X B =\n");

    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf("%d ",c[i][j]=a[i][j]*b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
