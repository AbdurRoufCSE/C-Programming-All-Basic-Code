#include<stdio.h>
main()
{
    int array1[]={10,20,30,40,50},i;
    int array2[5];

        printf("Array1=");
        for(i=0;i<5; i++)
        {
                printf("%d ",array1[i]);

        }
        for(i=0; i<5; i++)
        {

            array2[i]=array1[i];
        }
        printf("\nArray2=");
        for(i=0; i<5; i++)
        {
            printf("%d ",array2[i]);
        }

    return 0;
}
