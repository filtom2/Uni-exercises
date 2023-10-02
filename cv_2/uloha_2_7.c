// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    int C1,C2;
    char sign; // ZNAK {+, -, * and /}

    
    scanf("%d %d %c", &C1, &C2, &sign);


    switch(sign) {
        case '+':
            printf("%d %c %d = %d\n", C1, sign, C2, C1 + C2);
            break;
        case '-':
            printf("%d %c %d = %d\n", C1, sign, C2, C1 - C2);
            break;
        case '*':
            printf("%d %c %d = %d\n", C1, sign, C2, C1 * C2);
            break;
        case '/':
            printf("%d %c %d = %d\n", C1, sign, C2, C1 / C2);
            break;
        default:
            printf("Zle zadana volba.\n");
            break;
    }

    
    
    return 0;
}