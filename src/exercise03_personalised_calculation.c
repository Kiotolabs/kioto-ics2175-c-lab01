/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 03: Personalised Calculation
 *
- Student Name: Joseph Kimani
- Registration Number: ENB211-0023/2025
- Variant ID: ENB211-0023/2025
- Scenario: CALCULATION
 *
- Instructions:
-   - Record your assigned variant details above.
-   - Use the two input values given for your variant.
-   - Perform the required arithmetic operation.
-   - Store the result in a meaningfully named variable.
-   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    double input_value_1 = 15.5; 
    double input_value_2 = 4.0;  
    double calculation_result;


    calculation_result = input_value_1 * input_value_2;

    printf("Result: %.2lf\n", calculation_result);

    return 0;
}