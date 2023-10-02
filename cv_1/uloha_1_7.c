// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    // Prompt for user input
    int number;
    scanf("%d",&number);


    // We use the ".1f" after the percentage sign is to show only 1st decimal place
    printf("Cena bez dane: %d\n",number);
    printf("Predajna cena s danou 20%%: %.1f\n", number * 1.2);
    
    return 0;
}