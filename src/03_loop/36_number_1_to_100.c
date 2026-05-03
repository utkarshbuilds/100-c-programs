#include <stdio.h>
#define SIZE 100

int main()
{
    for (int i = 1; i <= SIZE; i++)
    {
        printf("%2d ", i);
        if(i % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}