#include <stdio.h>

int main()
{
    int number, power;


    printf("Enter the number and power: ");

    while (1)
    {
        if (scanf("%d %d", &number, &power) == 2 && power >= 0 && power <= 50)
        {
            break;
        }
        else
        {
            while (getchar() != '\n');
            printf("Enter the positive number and power: ");
        }
    }

    int result = 1;
    const int POWER = power;

    for (int i = 0; i < POWER; i++)
    {
        result = result * number;
    }

    printf("%d to the power %d = %d\n", number, power, result);

    return 0;
}