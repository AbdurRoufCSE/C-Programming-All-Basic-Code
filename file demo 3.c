#include<stdio.h>
int main ()
{
    FILE *file;
    char name[30];

    file = fopen("test.txt","w");

    if(file == NULL)
        printf("File dose not exist");
    else
    {
        printf("File is opened\n");
        printf("Enter your university name :");
        gets(name);

        fputs(name, file);
        printf("File is written successfully\n");
        fclose(file);
    }

    return 0;
}
