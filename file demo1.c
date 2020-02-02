#include<stdio.h>
main()
{
    FILE *file;

    file = fopen("test1.txt","w");

    if(file==NULL)
    {
        printf("File is not exist");

    }

    else

    {
        printf("File is open");
        fclose(file);

    }
    return 0;
}
