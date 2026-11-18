/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Collins Isaboke
 * Registration Number: ENB211-0163/23
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int stockQuantity = 120;
    float unitPrice = 49.99f;
    double warehouseWeight = 340.755;
    char aisleCode = 'C';

    printf("Stock Quantity: %d units\n", stockQuantity);
    printf("Unit Price: %.2f\n", unitPrice);
    printf("Warehouse Weight: %.3f kg\n", warehouseWeight);
    printf("Aisle Code: %c\n", aisleCode);

    return 0;
}
