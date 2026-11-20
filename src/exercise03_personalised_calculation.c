/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: HAGREAVES ODHIAMBO
 * Registration Number: ENB211-0061/2025
 * Variant ID: V14
 * Scenario: Total computer workstations
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    int workstationsPerRoom = 30;
    int numberOfRooms = 3;
    char lab = 'S';

    int totalWorkstations = workstationsPerRoom * numberOfRooms;

    printf("Order summary: %d workstations per room in lab %c  with %d as number of rooms in the lab and total workstations is %d.\n", workstationsPerRoom, lab, numberOfRooms, totalWorkstations);

    return 0;
}
