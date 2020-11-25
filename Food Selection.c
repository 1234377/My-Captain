#include <stdio.h>
int main(void){
    int choice;
    printf("Pick a choice:\n1. Food item-Pizza\nPrice-Rs 239\n2. Food item-Burger\nPrice-Rs 129\n3. Food item-Pasta\nPrice-Rs 179\n4. Food item-French Fries\nPrice-Rs 99\n5. Food item-Sandwich\nPrice-Rs 149\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Food item-Pizza\nPrice-Rs 239"); 
            break;
        case 2:
            printf("Food item-Burger\nPrice-Rs 129");
            break;
        case 3:
            printf("Food item-Pasta\nPrice-Rs 179");
            break;
        case 4:
            printf("Food item-French Fries\nPrice-Rs 99");
            break;
        case 5:
            printf("Food item-Sandwich\nPrice-Rs 149");
            break;
        default:
        printf("Invalid Choice");
    }
    return 0;
}