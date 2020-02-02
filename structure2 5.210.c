#include<stdio.h>
//Global structure
struct person
{
    int age;
    float salary;
};
//global variable
struct person person1,person2;
int main()
{
    printf("Person 1 for information :\n\n");
    printf("Enter Age = ");
    scanf("%d",&person1.age);
    printf("Enter salary = ");
    scanf("%f",&person1.salary);

    printf("\nPerson 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\nPerson 2 for information :\n\n");
    printf("Enter Age = ");
    scanf("%d",&person2.age);
    printf("Enter salary = ");
    scanf("%f",&person2.salary);

    printf("\nPerson 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    return 0;

}
