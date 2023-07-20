#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: main outputs int while decreasing
 * Return: 0;
*/
int main(void)
{
    int i;

    i = 9;
    while (i--)
    {
        printf("%d", i);
    }

    return (0);
    
}