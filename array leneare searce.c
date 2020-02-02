#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70};

    int num,i,pos;
    printf("Enter any number :");
    scanf("%d",&num);
    pos=-1;
    for(i=0; i<num; i++)

    {

        if(num==a[i])
        {


            pos=i+1;
        break;
        }
    }

    if(pos==-1)
        printf("Not found");
    else
        printf("The value found %d position is = %d",num,pos);

    return 0;
}
