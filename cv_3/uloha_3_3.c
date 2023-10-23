// Author: Milan Seliga
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d\n", &n);


    int count = 0;
    for (int i = 0;i < n;i++)
    {
        int cislo;
        scanf("%d",&cislo);
        if ( cislo > 0 && cislo <= 100)
        {
            count++;
        }
    }
    printf("%i\n",count);
    return 0;
}