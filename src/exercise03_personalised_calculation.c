
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Anne Favour Ouma
 * Registration Number: ENB211-0017/2025
 * Variant ID: V19
 * Scenario: Study hours
 */

#include <stdio.h>

int main(void)
{
    int studyHoursPerDay = 3;
    int numberOfDays = 7;
    int totalStudyHours;

    totalStudyHours = studyHoursPerDay * numberOfDays;

    printf("Study hours per day: %d\n", studyHoursPerDay);
    printf("Number of days: %d\n", numberOfDays);
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}
