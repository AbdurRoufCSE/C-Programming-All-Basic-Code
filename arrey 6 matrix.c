#include<stdio.h>
int main ()
{
    int i,j,A[10][10],B[10][10],C[10][10],row,cols;
    printf("\nEnter the number of rows and cols :");
    scanf("%d %d",&row,&cols);
    //scanning A matrix
    printf("\n\nEnter element of A matrix :\n\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //scanning B matrix
    printf("\n\nEnter element of  B matrix :\n\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //printing A matrix
    printf("A= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<cols; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }



    //printing B matrix
    printf("\nB= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<cols; j++)
        {
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    // Addition A+B

    for(i=0; i<row; i++)
    {

        for(j=0; j<cols; j++)
        {


            C[i][j]=A[i][j]+B[i][j];

        }
    }

    //printing A+B
    printf("\nA + B= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<cols; j++)
        {
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
}


