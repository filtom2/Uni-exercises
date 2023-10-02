// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    float x,y,z;
    scanf("%f %f %f", &x, &y, &z);

    printf("Objem: %.2f", x * y * z);
    return 0;
}