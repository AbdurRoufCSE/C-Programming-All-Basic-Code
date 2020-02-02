#include<stdio.h>
int max(int x[])
{

    int i;
    int max=x[0];
    for(i=1; i<5; i++)
    {

    if(max<x[i])

        max=x[i];

    }
    return max;

}


int main()
{
    int maximum;
    int num[]={60,20,80,40,50};
    maximum=max(num);

    printf("Maximum value is = %d\n",maximum);



    return 0;
}
