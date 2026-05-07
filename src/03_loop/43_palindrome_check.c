#include <stdio.h>

unsigned long int reverse (unsigned long int n)
{
    unsigned long int m = 0;
    while (n > 0)
    {
        int digit = n % 10;
        m = m * 10 + digit;
        n = n / 10;
    }
    return m;
}

int main()
{
    unsigned long int number;
    printf("Enter the number: ");

    while(1)
    {
        if (scanf("%lu", &number) == 1 && number >= 0)
        {
            break;
        }
        else
        {
            while(getchar() != '\n');
            printf("Enter a number positive: ");
        }
    }


    if(number == reverse(number))
    {
        printf("the number %d is a palindrome\n", number);
    }
    else
    {
        printf("the number %d is not a palindrome\n", number);
    }
    
    return 0; 
}