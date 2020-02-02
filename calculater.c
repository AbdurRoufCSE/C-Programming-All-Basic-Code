#include<stdio.h>
main()
{
    double a,b;  char op;
    printf("Enter an operator : +,-,*,/ : ");
    scanf("%c",&op);
    printf("Enter two number :");
    scanf("%lf%lf",&a,&b);
    switch (op)
    {



    case '+' :
        {
            printf("\n%.2lf + %.2lf = %.2lf \n",a,b,a+b);
            break;
        }
         case '-' :
        {
            printf("\n%.2lf - %.2lf = %.2lf \n",a,b,a-b);
            break;
        }
         case '*' :
        {
            printf("\n%.2lf  * %.2lf = %.2lf \n",a,b,a*b);
            break;
        }
         case '/' :
        {
            printf("\n%.2lf / %.2lf = %.2lf \n",a,b,a/b);
            break;
        }
         default :
        printf("\nNot a valid operator");
        }
    return 0;
}
