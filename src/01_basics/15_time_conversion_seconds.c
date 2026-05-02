/*
Program: Seconds to Hours, Minutes and Seconds converter
Description: Takes seconds as input and prints the hours, minutes, and seconds as output.
Date: 20-Mar-2026
Version: 1.0
Author: Utkarsh Raj
*/

#include <stdio.h>

// Constant Declaration
#define SECONDS_IN_HOUR 3600    
#define SECONDS_IN_MINUTE 60

int main()
{
    // Variable Declaration
    int total_seconds, hours, minutes;
    int remaining_seconds;

    //--------Input Section--------
    printf("========Seconds to Hours, Minutes and Seconds Converter========\n");

    // Input Validation 
    do
    {
        printf("Enter the number of seconds: ");
    } while (scanf("%d", &total_seconds) != 1 || total_seconds <= 0);

    //--------Processing Section--------
    hours = total_seconds / SECONDS_IN_HOUR;
    minutes = (total_seconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;
    remaining_seconds = total_seconds % SECONDS_IN_MINUTE;

    //--------Output Section--------
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", remaining_seconds);

    return 0;
}
