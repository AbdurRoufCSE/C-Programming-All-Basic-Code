#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("1+2+3+.......+%d",n);

    for(i=1;i<=n; i++)
    {
         sum = sum+i;
    }

        printf(" = %d \n",sum);

    return 0;
}
