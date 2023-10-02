// Author: Milan Šeliga 
#include <stdio.h>

int main(void){
    float radius;
    // no need for another variable
    // float pi = 3.14;
    
    // We receive input from scanf
    scanf("%f",&radius);
    // And then the simple calculation involving radius
    printf("The circumference of your circle with the radius of: %.2f is %.2f\n", radius,radius * 3.14 * 2);
    return 0;
}