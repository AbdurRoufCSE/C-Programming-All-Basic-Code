#include<stdio.h>
int main()
{
    int A[5] ,i,sum=0;
    printf("Enter the five integer number :");
    scanf("%d%d%d%d%d",&A[0],&A[1],&A[2],&A[3],&A[4]);

    for(i=0; i<5; i++)
    {

        sum=sum+A[i];

    }

    printf("The sum is = %d\n",sum);
    printf("The Average number = %.2f\n",(float)sum/5);

    return 0;
}
