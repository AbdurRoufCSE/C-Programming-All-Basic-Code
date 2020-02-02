#include<stdio.h>
int main()
{
    FILE *file;
    char fname[30];
    char lname[30];
    file = fopen("test2.txt","r");
    if(file==NULL)
        printf("File dosn't exist");
    else
    {
        printf("File is opened\n");

        fscanf(file,"%s %s",&fname,&lname);
        printf("%s %s\n",fname,lname);
        fclose(file);


    }

    return 0;
}
