#include <stdio.h>
int main(void){
    int i=0;
    int j=0;
    int rows=0;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("01");
        }
        printf("\n");
    }
    return 0;
}