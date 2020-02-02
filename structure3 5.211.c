#include<stdio.h>
//Global structure
struct person
{
    int age;
    float salary;
};

int main()
{

//local variable
    struct person person1 = {27,225000};
    struct person person2,person3;



    //element wise assignment
    person2.age = 25;
    person2.salary = 256000;

    person3 = person2;

    printf("\nPerson 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    printf("\nPerson 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    printf("\nPerson 3 :\n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

    return 0;

}

