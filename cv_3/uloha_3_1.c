// Author: Milan Šeliga
#include <stdio.h>

int main(void)
{
    // Select size of the input array
    int n;
    scanf("%d\n",&n);

    // Store values in an array
    double arr[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    
    // Calculate and display min/max
    double min = arr[0];
    double max = arr[0];

    for (int i = 0;i < n;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum: %.2lf\n", min);
    printf("Maximum: %.2lf\n",max);

    return 0;
}