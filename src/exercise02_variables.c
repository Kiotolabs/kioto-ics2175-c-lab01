
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Valentine ndunge
 * Registration Number: ENB211-0026/2024
 */

#include <stdio.h>

int main(void)
{
    int numberOfBooks = 12;
    float pricePerBook = 350.50f;
    double totalCost = 4206.00;
    char category = 'A';

    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Total cost: %.2f\n", totalCost);
    printf("Category: %c\n", category);

    return 0;
}
