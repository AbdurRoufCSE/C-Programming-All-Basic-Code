#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the any integer number :");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%2==0)
            count++;
        break ;
    }
     if(count==0)
        printf("Prime number");
     else
        printf("Not prime number");

    return 0;
}
