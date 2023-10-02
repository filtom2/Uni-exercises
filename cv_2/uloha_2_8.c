// Author: Milan Šeliga
#include <stdio.h>

int main(void){
    int a,b,c,d,e;
    // First equation
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    printf("%d\n",e / --a * b++ / c++);


    // Second equation
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    printf("%d\n",a %= b = d = 1 + e / 2); 
   
   
    return 0;
}