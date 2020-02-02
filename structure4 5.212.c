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

   if(person1.age==person2.age && person1.salary==person2.salary)
    printf("person1 equal to person2");
   else
    printf("person1 not equal to person2");
    return 0;

}


