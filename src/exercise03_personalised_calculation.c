/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
<<<<<<< Updated upstream
 * Student Name: Jonathan Maritawa Mwaniki
 * Registration Number: ENB211-0031/2025
 * Variant ID: TODO   (ENB211-0031/2025)
 * Scenario: TODO     (A campus printing desk cost estimation scenario)
=======
 * Student Name: MWANIKI JONATHAN MARITAWA
 * Registration Number: ENB211-0031/2025
 * Variant ID: ENB211-0031/2025
 * Scenario: A campus printing desk estimating the cost of printing
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
    /* TODO: Declare input variables with your assigned values */
    int pagesprinted=105;
    float costperpage=3.5f;
    /* TODO: Declare a result variable */
    double result;
    /* TODO: Perform the required arithmetic operation */
    result=pagesprinted*costperpage;

    /* TODO: Print the result using the required output label */
    printf("Printing cost:%.2f\n",result);
=======
    int pagesprinted = 105;
    float costperpage = 3.5f;
    float totalCost= pagesprinted*costperpage;

    printf("Pages printed %d\n",pagesprinted);
    printf("Cost Per Page %.1f\n",costperpage);
    printf("Total Cost %.2f\n",totalCost);
>>>>>>> Stashed changes

    return 0;
}
