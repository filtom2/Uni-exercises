// Author: Milan Šeliga 
#include <stdio.h>

int main(void){
    float input;
    // We receive input with scanf
    scanf("%f", &input);

    // In first rounding we round towards initial digit in the place of 1s
    printf("%d ", (int)input);
    
    // We add 0.5 so that 3.4 + 0.5 is still rounded to 3 but if eg. 3.6 + 0.5 = 4.1 now the result after rounding will be 4
    input = input + 0.5;
    printf("%d\n", (int)input);

    return 0;
}



// 3.5415926553