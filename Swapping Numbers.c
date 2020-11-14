#include <stdio.h>
int main(void){
    int a, b;
    printf("Enter two numbers separated by a single space: \n");
    scanf("%d %d", &a, &b);
    printf("The numbers entered by you are swapped here: %d %d", b, a);
    return 0;
}