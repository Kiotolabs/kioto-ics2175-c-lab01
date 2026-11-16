/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Jonathan Maritawa Mwaniki
 * Registration Number: ENB211-0031/2025
 * Variant ID: TODO   (ENB211-0031/2025)
 * Scenario: TODO     (A campus printing desk cost estimation scenario)
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.*/
#include <stdio.h>

int main(void)
{
    /* TODO: Declare input variables with your assigned values */
    int pagesprinted=105;
    float costperpage=3.5f;
    /* TODO: Declare a result variable */
    double result;
    /* TODO: Perform the required arithmetic operation */
    result=pagesprinted*costperpage;

    /* TODO: Print the result using the required output label */
    printf("Printing cost:%.2f\n",result);

    return 0;
}
