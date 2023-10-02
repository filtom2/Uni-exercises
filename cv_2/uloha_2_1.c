// Author: Milan Šeliga

#include <stdio.h>

int main(void){
    float x,y,z;
    printf("please enter 3 numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Priemer cisel x y z je: %g\n",(x+y+z)/3);

    return 0;
}