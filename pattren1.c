
#include<Stdio.h>
int main()
{
    int i,j,num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=num; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n\n");
    }

    return 0;
}
