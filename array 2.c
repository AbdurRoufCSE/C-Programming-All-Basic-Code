#include<stdio.h>
int main()
{
    int A[100],i,n,sum=0;
    printf("How many numbers :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0; i<n; i++)
    {

        sum=sum+A[i];

    }


    printf("The sum is = %d\n",sum);
    printf("The Average number is = %.2f\n",(float)sum/n);
    return 0;
}
