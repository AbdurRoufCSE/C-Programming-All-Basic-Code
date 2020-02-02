#include<stdio.h>
main()
{

    int a[400],i,n;

    printf("How many number :");
    scanf("%d",&n);
    printf("Enter the %d number :",n);

    for(i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
    }

     int  max=a[0];
    for(i=0;i<n; i++)
    {


      if(max<a[i])

        max=a[i];
    }

    printf("Max number is = %d",max);


    return 0;


}
