/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Daniel Kyalo
 * Registration Number: ENB211-0025/2024
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int pages_printed = 105;
    float cost_per_page = 3.5f;
    double total_printing_cost = pages_printed * cost_per_page;
    char grade_category = 'A';

    printf("Pages printed: %d\n", pages_printed);
    printf("Cost per page: %.2f\n", cost_per_page);
    printf("Total printing cost: %.2lf\n", total_printing_cost);
    printf("Category: %c\n", grade_category);

    return 0;
}