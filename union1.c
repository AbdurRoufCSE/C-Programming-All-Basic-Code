#include<stdio.h>
union test1
{
    int x;
    float y;
};


union test2
{

    float s;
    double d;

};


union test3
{

    char ch[20];
    int i;
};

struct test4
{

    double ch;
    int g;
    float f;

};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;



    printf("Size of  t1 = %d\n",sizeof(t1));
    printf("Size of  t2 = %d\n",sizeof(t2));
    printf("Size of  t3 = %d\n",sizeof(t3));
    printf("Size of  t4 = %d\n",sizeof(t4));



    return 0;
}
