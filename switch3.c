#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter :");
    scanf("%c",&letter);

    switch (letter)

    {

    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
        printf("Vowel\n");
        break;

    default :
        printf("Consonant");

    }

}
