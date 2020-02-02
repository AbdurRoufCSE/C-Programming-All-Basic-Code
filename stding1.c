#include<stdio.h>
int main()
{
    char s1[30]="Md. Abdur Rouf";
    char s2[30]="C programming";
    char s3[30];

    printf("Before swapping \n");
    printf("String s1 = %s\n",s1);
    printf("String s2 = %s\n",s2);
    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);

    printf("\n\nAfter swapping \n");
    printf("String s1 = %s\n",s1);
    printf("String s2 = %s\n",s2);

    return 0;
}
