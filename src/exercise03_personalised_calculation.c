/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: TODO
 * Registration Number: TODO
 * Variant ID: TODO   (assigned by your lecturer, e.g. V07)
 * Scenario: TODO     (assigned by your lecturer)
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
    int numberOfNotebooks = 8;
    float pricePerNotebook = 125.5;
    char itemCategory = 'S';

    float OrderTotal = numberOfNotebooks * pricePerNotebook;

    printf("Order summary: %d notebooks in category %c  with Ksh%.2f as price per book and total cost is Ksh%.2f.\n", numberOfNotebooks, itemCategory, pricePerNotebook, OrderTotal);

    return 0;
}
