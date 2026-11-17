
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Margret Akinyi Oyim
 * Registration Number: ENB211-0032/2025
 * Variant ID: ENB211-0032/2025
 * Scenario: Total workstations in two computer lab rooms
 */

#include <stdio.h>

int main(void)
{
    int roomAWorkstations = 84;
    int roomBWorkstations = 22;
    int totalWorkstations;
    char roomCategory = 'A';

    totalWorkstations = roomAWorkstations + roomBWorkstations;

    printf("Workstations in room A: %d\n", roomAWorkstations);
    printf("Workstations in room B: %d\n", roomBWorkstations);
    printf("Total workstations: %d\n", totalWorkstations);
    printf("Room category: %c\n", roomCategory);

    return 0;
}
