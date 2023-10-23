#include <stdio.h>
#include <stdlib.h>

// When allocating memory to a heap for a 2D array we need to use pointer-to-pointer :'(
void **alokuj_2D_pole();


int main(void)
{
    // n and m can not be smaller than 0
    int n,m;
    do
    {
        scanf("%d\n%d", &n, &m);
    } while (n < 0 || m < 0);
    
    return 0;
}

void **alokuj_2D_pole()
{
    // iba alokujeme pole
}