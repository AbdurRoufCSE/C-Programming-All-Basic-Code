#include<stdio.h>
int main()
{
    char A[30]="madam";
    char B[30];
    int i=0,len=0,j;
    while(A[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    B[j]!='\0';
    printf("A = %s",A);
    printf("\nB = %s\n",B);
    int d=strcmp(A,B);

     if (d==0)
        printf("Palindrome string");
     else
        printf("Not palindrome");
    return 0;
}
