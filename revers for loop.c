#include<stdio.h>
int main()
{
    int n,s,r,sum=0,i;
    printf("Enter the number :");
    scanf("%d",&n);

    s=n;
    for(i=s; s!=0; i++)
    {
        r=s%10;
        sum=sum*10+r;
        s=s/10;


    }
    printf("Reverse number is = %d",sum);
     return 0;

}
