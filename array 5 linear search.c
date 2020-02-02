#include<stdio.h>
int main()
{
    int num[ ]={10,20,30,40,50,60,70},i,value,pos=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
        break;
        }
    }

    if(pos==-1)
        printf("Not Found");
    else
        printf("\nThe value is found at position  %d \n",pos);

    return 0;
}
