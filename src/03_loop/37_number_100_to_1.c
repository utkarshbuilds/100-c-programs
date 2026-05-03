#include <stdio.h>

#define SIZE 1

int main()
{
    for (int i = 100; i >= SIZE; i--)
    {
        printf("3d ", i);

        if ((i-1) % 10 == 0 && i < 100)
        {
            printf("\n");
        }
    }

    return 0;
}