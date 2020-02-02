#include     <stdio.h>
int main()
{

    FILE *file;
    char ch;
    file=fopen("test2.txt","r ");
    if(file==NULL)
        printf("File dosn't exist");
    else
    {
      printf("File is opened\n\n");

      while(!feof(file))
      {

         ch = fgetc(file);
         printf("%c",ch);

      }
        fclose(file);


    }


}
