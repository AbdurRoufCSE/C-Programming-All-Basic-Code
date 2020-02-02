#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){
    /* for r th row, first print rows-r spaces then stars */
        for(j = 1; j <= rows; j++){
            if(j <= rows-i){
                printf(" ");
            } else {
                printf("*");
       }
        }
        /* move to next row */
        printf("\n");
    }

    return 0;
}
