#include <stdio.h>

int main()
{
    int num1;
    int sum = 0;

    printf("Enter the number: ");
    while(1)
    {
        if(scanf("%d", &num1) == 1)
        {
            break;
        }
        else
        {
            while(getchar() != 0)
            {
                printf("Enter a valid number: ");
            }  
        }
    }

    for (int i = 0; i <= num1; i++)
    {
        sum += i;
    }

    printf("The sum of the number for 1 to %d = %d\n", num1, sum);
    return 0;
}