/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Victor njogu
 * Registration Number: ENB211-0018/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    /* Declare and initialise an int variable */
    int numberOfNotebooks = 4;

    /* Declare and initialise a float variable */
    float pricePerNotebook = 125.50f;

    /* Declare and initialise a double variable */
    double orderTotal = numberOfNotebooks * pricePerNotebook;

    /* Declare and initialise a char variable */
    char itemCategory = 'S';

    /* Display each value with the correct printf format specifier */
    printf("Item category: %c\n", itemCategory);
    printf("Number of notebooks: %d\n", numberOfNotebooks);
    printf("Price per notebook: %.2f\n", pricePerNotebook);
    printf("Order total: %.2lf\n", orderTotal);

    return 0;
}
