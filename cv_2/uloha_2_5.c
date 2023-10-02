// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    int C1,C2;
    scanf("%d\n%d", &C1, &C2);


    // Solution: Using if/else

    if (C1 > C2) {
        printf("Cislo C1=%d je vacsie ako C2=%d\n", C1, C2);
    } else if (C1 < C2) {
        printf("Cislo C1=%d je mensie ako C2=%d\n", C1, C2);
    } else {
        printf("Both C1=%d and C2=%d are the same", C1, C2);
    }

    return 0;
}