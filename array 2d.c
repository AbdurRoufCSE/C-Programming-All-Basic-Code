#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    int A[10] [10] , B[10][10], C[10][10];

    printf("Enter the number of row and cols :");
    scanf("%d %d",&rows,&cols);

    printf("Enter elements for A matrix :\n ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("A[%d] [%d] = ",i,j);

            scanf("%d",&A[i] [j]);
        }
        printf("\n");
    }
     printf("\nEnter elements for B matrix :\n ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("A[%d] [%d] = ",i,j);

            scanf("%d",&A[i] [j]);
        }
        printf("\n");
    }

     printf("A = ");
    for(i=0; i<rows; i++)
    {
        printf("\t");
        for(j=0; j<cols; j++)
        {
            printf("%d ",A[i] [j]);
        }
        printf("\n");
    }

    printf("\n\nB = ");
    for(i=0; i<rows; i++)
    {
        printf("\t");
        for(j=0; j<cols; j++)
        {
            printf("%d ",A[i] [j]);
        }
        printf("\n");
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
        C[i][j] = A[i][j] + B[i][j];
        }
    }


        printf("\n A + B = ");
    for(i=0; i<rows; i++)
    {

        for(j=0; j<cols; j++)
        {
            printf("%d ",C[i] [j]);
        }
        printf("\n");
         printf("\t");
    }


    return 0 ;
}




