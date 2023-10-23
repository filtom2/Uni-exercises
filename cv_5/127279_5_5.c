#include <stdio.h>

// Prekopiruje pole x do pola y
int delitele(int x[], int pocetx, int y[], int k);

int main(void)
{
    int pocetx,pocety = 0;
    int y[pocety];
    int k;

    int x[] = {4, 7, 10, 2, 3, 9, 6, 5, 8, 12};
    pocetx = 10;
    pocety = delitele(x, pocetx, y, 24); // volanie funkcie
    printf("pocety: %d\n",pocety); // vypis vysledku
    printf("y: {");
    for (int i = 0; i < pocety;i++)
    {
        printf("%d, ",y[i]);
    }
    printf("}\n");

    return 0;
}

int delitele(int x[], int pocetx, int y[], int k)
{
    int pocety = 0;

    for (int i = 0; i < pocetx;i++)
    {
        if (k % x[i] == 0)
        {
            y[pocety] = x[i];
            pocety++;
        }
    }

    return pocety;
}