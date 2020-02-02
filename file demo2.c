#include<stdio.h>
main()
{
    FILE *file;
    char name[]=" Sumaiya";
    int i,length=strlen(name);

    file = fopen("test1.txt","a");

    if(file==NULL)
    {
        printf("File is not exist");

    }

    else

    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {

            fputc(name[i],file);

        }
        printf("file is written successfully\n");

        fclose(file);

    }
    return 0;
}

