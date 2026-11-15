/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: OMONDI FAVOUR SHEKINAH
 * Registration Number: ENB211-0119/2025
 * Variant ID: Not shown
 * Scenario: Computer lab workstations in two rooms
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
   int workstationsRoomA = 56;
   int workstationsRoomB = 22;
   int totalWorkstations;

   totalWorkstations = workstationsRoomA + workstationsRoomB;

   printf("Workstations in room A: %d\n", workstationsRoomA);
   printf("Workstations in room B: %d\n" workstationsRoomB);
   printf("Operation: room A + room B\n");
   printf("Total workstations: %d\n",totalWorkstations);

    return 0;
}
