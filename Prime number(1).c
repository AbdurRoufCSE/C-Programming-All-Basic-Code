#include<stdio.h>
int main ()
{
    int a,i,count=0;
    printf("Enter the number :");
    scanf("%d",&a);

    for (i=2;i<a;i++)
    {
        if(a%i==0)
        {
        count++;
        break ;
        }
    }
        if(count==0)
            printf("Prime");
            else
            printf("Not prime");

    return 0;
}
