#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]= {"Abdur rouf"};
    int length = strlen (name);
    int i;

    file = fopen("test1.txt","w");
    if(file==NULL)
        printf("File dose not exist");
    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);

        }

    }
    fclose(file);
    return 0;
}
