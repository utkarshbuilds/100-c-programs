/*
Program: Days to Year, Month and Day converter
Description: Takes days as input and prints the year, months, and days as output.
Date: 20-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// Constant Declaration
#define MONTHS_IN_YEAR 12
#define DAYS_IN_MONTH 30

int main()
{
    // Variable Declaration
    int total_days, years, months;
    int remaining_days;

    //--------Input Section--------
    printf("========Days to Year, Month and Days Converter========\n");

    // Input Validation 
    do
    {
        printf("Enter the number of days: ");
    } while (scanf("%d", &total_days) != 1 || total_days <= 0);

    //--------Processing Section--------
    years = total_days / (DAYS_IN_MONTH * MONTHS_IN_YEAR) ;
    months = (total_days % (DAYS_IN_MONTH * MONTHS_IN_YEAR)) / DAYS_IN_MONTH;
    remaining_days = total_days % DAYS_IN_MONTH;

    //--------Output Section--------
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remaining_days);

    return 0;
}
