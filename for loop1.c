#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)
    {
        sum=sum+i;
         printf("+%d",i);
    }
printf(" Sum = %d",sum);

 return 0;
}
