#include<stdio.h>
int main()
{
    FILE *file;
    file =  fopen("test.txt",  "w");

    if (file = NULL)
        printf("File dosn't exist");
    else
        printf("File is opened");
    fclose (file);

    return 0;
}
