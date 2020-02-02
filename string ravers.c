#include<stdio.h>
main()
{
    char s1[30]="Abdur Rouf";
    char s2[30];

    int i=0,len=0,j;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }

    for(i=0, i=len-1; i>=0; i--,i++)
    {
        s2[j]=s1[i];

    }
    s2[j]='\0';

      printf("S1 ravers  = %s\n",s1);
      printf("S2 ravers  = %s\n",s2);


}

