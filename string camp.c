#include<stdio.h>
main()
{
    char a1[]="Abdur Rouf";
    char a2[]="Abdur Rouf";

    int d=strcmp(a1,a2);
    if(d==0)
        printf("String are equal");
    else
        printf("String are not equal");


    return 0;
}
