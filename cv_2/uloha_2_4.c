// Author: Milan Šeliga
#include <stdio.h>

// English alphabet 32 letters 
int main(void){
    char first,second;
    scanf("%c %c", &first, &second);

    // First conversion
    printf("%c %d\n", first - 32, first - 32);
    // Second conversion
    printf("%c %d\n", second - 32, second - 32);


    return 0;
}