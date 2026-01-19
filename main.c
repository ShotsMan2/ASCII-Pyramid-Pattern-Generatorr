#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
