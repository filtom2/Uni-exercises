// Author: Milan Šeliga
#include <stdio.h>

int main(void)
{
    int n = 4;
    int numbers[n];
    

    for (int i = 0; i < n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    if (numbers[0] >= 0 && numbers[0] <= 10)
    {
        
        for (int i = 0; i < n; i++)
        {
            // Most occuring state
            if (i > 1)
            {
           
                if (numbers[i] < (numbers[i-1] * 2) && numbers[i] < (numbers[i-1]* 0.5))
                {
                    printf("Postupnost je spravna.\n");
                }
            }
            // Least occuring which is when the number is only and only 1 (1 time only)
            else
            {
            printf("least occuring");
            }





        }
    }

    // Prints the array numbers
    // for (int i = 0;i < n;i++)
    // {
    //     printf("%d",numbers[i]);
    // }
    
    
    return 0;
}