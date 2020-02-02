#include<stdio.h>
int main()
{
    char A[30]="Abdur Rouf";
    char B[30];
    int i=0,j,len=0;
    while(A[i]!='\0')
    {

        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0; i--,j++)
    {
        B[j]=A[i];
    }
    B[j]='\0';
            printf("%s\n",B);

    return 0;
}
