#include <stdio.h>
#include <math.h>

double kvadraticka_rovnica(double a, double b, double c, double *ptr_x1, double *ptr_x2);


int main(void)
{
    double x1,x2;
    double a,b,c;
    double *ptr_x1;
    double *ptr_x2;
    int korene;

    // Ak by bol koeficient zvoleny ako 0 program by mal nedefinovane chovanie
    scanf("%lf %lf %lf", &a, &b, &c);    

    ptr_x1 = &x1;
    ptr_x2 = &x2;

    korene = kvadraticka_rovnica(a, b, c, ptr_x1, ptr_x2);

    printf("Pocet korenov kvadratickej rovnice je: %d\n", korene);
    printf("Prvy koren ma hodnotu: %lf\n", *ptr_x1);
    printf("Druhy koren ma hodnotu: %lf\n", *ptr_x2);
    

    return 0;
}


double kvadraticka_rovnica(double a, double  b, double c, double *ptr_x1, double *ptr_x2)
{
    double diskriminant;

    diskriminant = b * b - 4 * a * c;

    if (diskriminant > 0)
    {
        *ptr_x1 = (-1 * b + sqrt(diskriminant)) / 2 * a;
        *ptr_x2 = (-1 * b - sqrt(diskriminant)) / 2 * a;

        return 2;
    }
    else if (diskriminant == 0)
    {
        *ptr_x1 = (-1 * b) / (2 * a);
        *ptr_x2 = 0;

        return 1;
    }
    else
    {
        *ptr_x1 = 0;
        *ptr_x2 = 0;

        return 0;
    }

}