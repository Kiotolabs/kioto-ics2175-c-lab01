/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: KENNEDY MUSYOKA KYALO
 * Registration Number: ENB211-0029/2025
 * Variant ID:    Not provided
 * Scenario: A computer lab records the total number of available work stations accross two rooms.
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: KENNEDY MUSYOKA KYALO
 * Registration Number: ENB211-0029/2025
 * Variant ID: NOT PROVIDED
 * Scenario: Room A and Room B workstation calculation
 */

#include <stdio.h>

int main(void)
{
    int roomA = 28;
    int roomB = 22;
    int totalWorkstations;

    totalWorkstations = roomA + roomB;

    printf("Total workstations: %d\n", totalWorkstations);

    return 0;
}
