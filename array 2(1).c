#include<stdio.h>
int main ()
{
    int array1[500],n,array2[500],i;
    printf("Enter how many numbers :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&array1[i]);
    printf("Array 1 :");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);

    }
    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray 2:");
    for(i=0; i<n; i++)
        printf("%d ",array2[i]);





}
