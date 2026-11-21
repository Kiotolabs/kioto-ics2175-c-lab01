/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: OMONDI FAVOUR SHEKINAH
 * Registration Number: ENB211-0119/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int unitsThisSemester = 6;
    float feePerUnit = 2500.50f;
    double distanceToCampusKm = 3.75;
    char favoriteGrade = 'A';

    printf("Units this semester: %d\n", unitsThisSemester);
    printf("Fee per unit: %.2f\n", feePerUnit);
    printf("Distance to campus (km): %.2f\n", distanceToCampusKm);
    printf("Target grade: %c\n", favoriteGrade);

    return 0;
}
