#include<stdio.h>
int main()
{
    int n,a[100],i,max;
    printf("How many number :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1; i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("max = %d",max);
}
