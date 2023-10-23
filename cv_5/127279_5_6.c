#include <stdio.h>
#include <stdlib.h>

void alokuj_1D_pole(int m);
int maximum_poz();
int minimum_poz();


int main(void)
{
    int m;

    do
    {
        // Rozmery pola m
        scanf("%d",&m);
    } while (m <= 0);

    alokuj_1D_pole(m);

    return 0;
}

int minimum_poz()
{

}


int maximum_poz()
{

}

void uvolni()
{
    free();
}
