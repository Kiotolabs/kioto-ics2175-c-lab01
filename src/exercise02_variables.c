/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 02: Variables and Data Types
 *
- Student Name: John Chege
- Registration Number: ENB211-0004/2025
 *
- Instructions:
-   - Declare and initialise one int, one float, one double and one char.
-   - Use meaningful variable names.
-   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    /* Declare and initialise an int variable */
    int morningStudyHours = 2;

    /* Declare and initialise a float variable */
    float studyRate = 1.5f;

    /* Declare and initialise a double variable */
    double exactStudyTarget = 10.75;

    /* Declare and initialise a char variable */
    char studyCategory = 'A';

    /* Print each value with a label and the correct format specifier */
    printf("--- Exercise 02: Variables and Data Types ---\n");
    printf("Morning Study Hours (int):    %d\n", morningStudyHours);
    printf("Study Rate (float):           %.1f\n", studyRate);
    printf("Exact Study Target (double):  %.2lf\n", exactStudyTarget);
    printf("Study Category (char):        %c\n", studyCategory);

    return 0;
}