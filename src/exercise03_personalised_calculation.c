/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Lawrence Ndiritu Gitonga
 * Registration Number: ENB211-0011/2024
 * Variant ID: None
 * Scenario: A small farm records the area of a rectangular demonstration plot.
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
    /* Declare input variables with your assigned values */
    int plot_length = 48;
    int plot_width = 13;

    /* Declare a result variable */
    int plot_area;

    /* Perform the required arithmetic operation */
    plot_area = plot_length * plot_width;

    /* Print the result using the required output label */
    printf("Plot length (m): %d\n", plot_length);
    printf("Plot width (m): %d\n", plot_width);
    printf("Operation: %d * %d\n", plot_length, plot_width);
    printf("Plot area: %d sq m\n", plot_area);

    return 0;
}

Expected Output

Plaintext
Plot length (m): 48
Plot width (m): 13
Operation: 48 * 13
Plot area: 624 sq m