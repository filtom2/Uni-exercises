// Author: Milan Šeliga 
#include <stdio.h>

int main(void){
    float height,mass;

    printf("Please first enter your height(cm) and then enter your mass(kg) eg. 175 86: ");
    scanf("%f %f",&height,&mass);

    printf("BMI: %.3f\n",mass / (height * height / 100) * 100);
    return 0;
}