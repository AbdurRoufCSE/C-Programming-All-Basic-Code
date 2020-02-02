#include<stdio.h>
int main()
{
    int a[100],i,sum=0,n;
    printf("Enter the N = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0; i<n; i++)
     {
        printf("%d ",a[i]);
        sum=sum+a[i];

     }

       printf("sum = %d",sum);

    return 0;
}

