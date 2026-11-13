/*
 * Student Name: Jane Doe
 * Registration Number: ENE-01-1234-26
 * Variant ID: V13
 * Scenario: Total computer workstations
 */

#include <stdio.h>

int main(void)
{
    int workstationsPerLab = 25;
    int numberOfLabs = 4;
    int totalWorkstations = workstationsPerLab * numberOfLabs;

    printf("Total workstations: %d\n", totalWorkstations);
    return 0;
}