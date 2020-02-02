#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age,phone,num,i;
    file=fopen("Student.txt","a");

    if(file==NULL)
        printf("File dosn;t exist");
    else
    {
       printf("File is opened\n");
       printf("Enter number of student :");
       scanf("%d",&num);
       for(i=0; i<num; i++)
        {


           printf("Enter student name : ");
           scanf("%s",&name);
           printf("Enter student age : ");
           scanf("%d",&age);
           printf("Enter student phone number : ");
           scanf("%d",&phone);

           fprintf(file ,"%s\t\t%d\t%d\n",name,age,phone);


       }

       fclose(file);


    }



    return 0;
}
