#include<stdio.h>
int main()
{
    int n,s[30],i;
    printf("Enter any number :");
    scanf("%d",&n);

    s[0]=0;
    s[1]=1;

    for(i=2; i<n; i++)
    {
        s[i]=s[i-1]+s[i-2];

    }

    for(i=0; i<n; i++)
    {
        printf("%d",s[i]);

    }

    return 0;
}
