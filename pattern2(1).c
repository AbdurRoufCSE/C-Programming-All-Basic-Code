#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},sum=0,i;


    for(i=0; i<5; i++)
    {
        sum=sum+a[i];
    }

    printf("sum = %d",sum);
    printf("\nAverage = %d",sum/5);

    return 0;
}
