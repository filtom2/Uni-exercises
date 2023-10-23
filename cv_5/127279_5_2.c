#include <stdio.h>

// int maximum(int *cislo_1, int *cislo_2);

// int main(void)
// {
//     int cislo_1, cislo_2;
//     scanf("%d %d", &cislo_1, &cislo_2);

//     printf("Cislo %d je vacsie.\n",maximum(&cislo_1, &cislo_2));

//     return 0;
// }


// int maximum(int *cislo_1, int *cislo_2)
// {
//     if (*cislo_1 > *cislo_2)
//     {
//         return *cislo_1;
//     }
//     else if (*cislo_1 < *cislo_2)
//     {
//         int number_2 = *cislo_2;
//         return *cislo_2;
//     }
// }

int *maximum(int *a, int *b);

int main()
{
    int nr_1, nr_2;
    scanf("%d %d", &nr_1, &nr_2);
    
    int* result = maximum(&nr_1, &nr_2);
    printf("Cislo %d je vacsie\n", *result);


    return 0;
}

int *maximum(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}