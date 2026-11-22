
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Valentine Ndunge
 * Registration Number: ENB211-0026/2024
 * Variant ID: V13
 * Scenario: Total computer workstations
 *
 * Input value 1: 25
 * Input value 2: 4
 * Operation: Multiplication
 * Required output label: Total workstations
 */

#include <stdio.h>

int main(void)
{
    int computerWorkstations = 25;
    int numberOfLabs = 4;
    int totalWorkstations;

    totalWorkstations = computerWorkstations * numberOfLabs;

    printf("Total workstations: %d\n", totalWorkstations);

    return 0;
}
