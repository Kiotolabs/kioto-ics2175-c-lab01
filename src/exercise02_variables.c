/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 02: Variables and Data Types
 *
- Student Name: Joseph Kimani
- Registration Number: ENB211-0023\2025 
 *
- Instructions:
-   - Declare and initialise one int, one float, one double and one char.
-   - Use meaningful variable names.
-   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{

    int student_age = 20;


    float temperature = 36.6f;

    double pi_value = 3.1415926535;

    char grade_letter = 'A';

    printf("Student Age: %d years\n", student_age);
    printf("Temperature: %.1f °C\n", temperature);
    printf("Pi Value: %.5lf\n", pi_value);
    printf("Grade Letter: %c\n", grade_letter);

    return 0;
}