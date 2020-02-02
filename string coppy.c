#include<stdio.h>
#include<string.h>
int main()
{
    char  a[ ]="C programming";
    char b[30];

    strcpy(b,a);
    printf("String copy = %s\n",a);
    printf("String copy 2 = %s\n",b);
    return 0;
}
