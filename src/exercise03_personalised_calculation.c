/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 03: Personalised Calculation
 *
- Student Name: John Chege
- Registration Number: ENB211-0004/2025
- Variant ID: none
- Scenario: Study time calculation across two sessions
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
    /* Declare input variables with your assigned values */
    int morningStudyHours = 2;
    int eveningStudyHours = 3;

    /* Declare a result variable */
    int totalStudyHours;

    /* Perform the required arithmetic operation */
    totalStudyHours = morningStudyHours + eveningStudyHours;

    /* Print the result using the required output label */
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}