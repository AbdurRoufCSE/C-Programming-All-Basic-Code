#include<stdio.h>

//global structure
struct person
{
    int age;
    float salary;

};
int main()
{
    struct person person1,person2;

    person1.age = 27;
    person1.salary = 122050;
    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

     person2.age = 25;
    person2.salary = 112050;
    printf("\nPerson 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch();
}
