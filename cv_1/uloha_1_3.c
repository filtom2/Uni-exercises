// Author: Milan Šeliga
// nepouzivat '=' !!!
#include <stdio.h>

int main(void){
    // We declare the variables
    int first_input;
    int second_input;

    scanf("%d %d", &first_input, &second_input);

    // We display and calculate the sum simultaneously in one line
    printf("Sucet nacitanych cisiel je: %d\n", first_input + second_input);


    // We will do the same for multiplication
    printf("Sucin nacitanych cisiel je: %d\n", first_input * second_input);


    return 0;
}