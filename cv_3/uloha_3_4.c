// Author: Milan Šeliga
#include <stdio.h>

int faktorial(int n);

int main(void)
{
    int result,n;
    
    do 
    {
        scanf("%d", &n);
    } while (n <= 0);

    result = faktorial(n);
    printf("%d! = %d\n", n, result);
    
    return 0;
}

int faktorial(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    } 
    else
    {
        return n * faktorial(n-1);
    }
}