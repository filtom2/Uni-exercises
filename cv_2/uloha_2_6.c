// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    int C1,C2;
    char sign; // ZNAK {+, -, * and /}

    scanf("%d %d %c", &C1, &C2, &sign);

    if (sign == '+'){
        printf("%d %c %d = %d\n", C1, sign, C2, C1 + C2);
        } else if (sign == '-'){
        printf("%d %c %d = %d\n", C1, sign, C2, C1 - C2);
        } else if (sign == '*'){
        printf("%d %c %d = %d\n", C1, sign, C2, C1 * C2);
        } else if (sign == '/'){
        printf("%d %c %d = %d\n", C1, sign, C2, C1 / C2);
        } else {
        printf("Wrong input. Terminating program =( \n");
        } 

    return 0;
}