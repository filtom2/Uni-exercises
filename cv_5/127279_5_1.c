#include <stdio.h>

double vypocitaj(double dlzka, double sirka, double *obsah, double *obvod);
void nacitaj(double *dlzka, double *sirka);


int main(void)
{
    double obvod,obsah,dlzka,sirka;

    // volanie funkcii
    nacitaj(&dlzka,&sirka);
    vypocitaj(dlzka,sirka,&obsah,&obvod);
    
    printf("Obsah: %.3lf\n",obsah);
    printf("Obvod: %.3lf\n",obvod);
    
    return 0;    
}


void nacitaj(double *dlzka , double *sirka)
{               //       //

    // pomocou argumentov vrati 2 realne cisla
    double strana_A, strana_B;
    scanf("%lf %lf",&strana_A, &strana_B);

    *dlzka = strana_A;
    *sirka = strana_B;

}


double vypocitaj(double dlzka, double sirka, double *obsah, double *obvod)
{
    *obsah = dlzka * sirka;
    *obvod = 2 * (dlzka + sirka);

    return 0;
}