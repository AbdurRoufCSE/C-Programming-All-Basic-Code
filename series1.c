#include<stdio.h>
main()
{
    int n,i,sum=0;
    printf("Enter the last number of the series :");
    scanf("%d",&n);
    printf("\n1*3*5*.......*%d",n);

    for(i=1; i<=n; i++)
    {

        sum=sum/i;


    }
    printf("  Sum = %d\n",sum);
    return 0;

}
