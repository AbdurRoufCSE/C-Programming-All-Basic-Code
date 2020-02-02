#include<stdio.h>
int main()
{
    int n,a[]={10,20,30,40,50},i,pos=-1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=0; i<5; i++)
    {

        if(n==a[i])
        {
            pos=i+1;
            break;

        }
    }
        if(pos==-1)
            printf("Item is not found");
        else
            printf("The number is %d and position is = %d\n",n,pos);


    return 0;
}
