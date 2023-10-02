// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    char symbol;

    printf("Enter a character: ");
    symbol = getchar();

    printf("You entered the character for: %c \n", symbol);
    return 0;
}