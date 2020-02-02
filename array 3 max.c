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
    int max=A[0];
    for(i=0; i<n; i++)
    {
       if(max<A[i])
        max = A[i];

          }
    printf("The Maximum number is = %d\n",max);
    return 0;
}

