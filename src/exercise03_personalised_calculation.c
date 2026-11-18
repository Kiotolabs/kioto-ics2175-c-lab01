/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Ruth Owiti
 * Registration Number: Enb211-0122/2025
 * Variant ID: V07Enb211-0122/2025   (assigned by your lecturer, e.g. V07)
 * Scenario: Rectangular demonstration farm plot
     (assigned by your lecturer)
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
    float length = 72;
    float width = 13;
    float area = length * width;
    char category = 'A';

    printf("Plot length: %.2f m\n", length);
    printf("Plot width: %.2f m\n", width);
    printf("Plot category: %c\n", category);
    printf("Plot area: %.2f square metres\n", area);

    return 0;
}
