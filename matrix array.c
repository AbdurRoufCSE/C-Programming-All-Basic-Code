#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,r1,r2,c1,c2,sum=0,k;
    printf("Enter row and cols for A matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and cols for B matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! please enter A matrix of cols and B matrix row equal ");
        printf("\nEnter row and cols for A matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and cols for B matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    printf("\nEnter element for A matrix :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter element for B matrix :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nA matrix :\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nB matrix :\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");

        for(j=0; j<c1; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            for(k=0;k<c1;k++)
            {
               sum=sum + A[i][j] * B[i][j];

            }
           C[i][j]=sum;
        sum=0;

        }


    }

    printf("\nA X B matrix :\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");

        for(j=0; j<c2; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
