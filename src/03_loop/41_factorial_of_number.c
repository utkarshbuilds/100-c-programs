#include <stdio.h>

int main()
{
    int number;
    int factorial = 1;
    printf("Enter the number: ");

    while (1)
    {
        if (scanf("%d", &number) == 1)
        {
            break;
        }
        else
        { 
            while (getchar() != '\n');
            printf("Invalid number, reenter: ");
        }
    }

    const int SIZE = number; // PROTECTING FUCTION FROM HARDCODING VALUE

    for (int i = 2; i <= SIZE; i++)
    {
        factorial *= i;
    }

    printf("\n-----Factorail of the Number-----\n");
    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}