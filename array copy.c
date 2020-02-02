#include<stdio.h>
int main()
{
    int i,a1[30],a2[30],n;
    printf("How many number : ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Array1 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");
    printf("Array2 = ");
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
        printf("%d ",a2[i]);
    }


    return 0;
}
