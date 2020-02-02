#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,fibo;
    printf("Enter N = ");
    scanf ("%d",&n);
    printf("%d %d",first,second);

    for(i=2; i<n; i++ )
    {
        fibo=first+second;
        first=second;
        second=fibo;
        printf(" %d",fibo);
    }


    return 0;
}
