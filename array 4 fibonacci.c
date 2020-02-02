#include<stdio.h>
int main()
{
    int A[30],i,n;
    printf("How many numbers :");
    scanf("%d",&n);


    A[0]=0;
    A[1]=1;

    for(i=2; i<n; i++)
    {
       A[i]=A[i-1]+A[i-2];
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
      printf("%d ",A[i]);
          }
        printf("\n");
    return 0;
}


