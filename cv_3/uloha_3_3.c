// Author: Milan Seliga
#include <stdio.h>

int main(void)
{
    
    int n;
    scanf("%d", &n);

    int correct_numbers[n],numbers[n];
    

    for (int i = 0; i < n;i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0 && numbers[i] <= 100)
        {
            correct_numbers[i] = numbers[i];
        }    
    }   
    
    // TODO print size of an array
    printf{}
    
    
    return 0;
}