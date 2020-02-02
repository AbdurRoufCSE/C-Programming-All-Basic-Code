#include<stdio.h>

struct person{

    char name[20];
    int age;
    float salary;

};
int main()
{
    struct person person1,person2,person3;

    //person1.name[20]={"Md. Abdur Rouf"};
    person1.age=21;
    person1.salary=152652.73;


    printf("Person 1 :\n\n");
   // printf("Name : %s\n",person1.name[20]);
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);



    printf("\nPerson 2 :\n");
    //printf("Name : %s\n",person2.name);
    printf("Age : %d\n",person2.age);
    printf("Salary : %.2f\n",person2.salary);



    printf("\nPerson 3 :\n");
//printf("Name : %s\n",person3.name);
    printf("Age : %d\n",person3.age);
    printf("Salary : %.2f\n",person3.salary);

    return 0;
}
