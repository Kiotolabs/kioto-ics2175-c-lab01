/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: HAGREAVES ODHIAMBO
 * Registration Number: ENB211-0061/2025
 * Variant ID: V14   (assigned by your lecturer, e.g. V07)
 * Scenario:     
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
