
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: CLINTON KIPCHIRCHIR
 * Registration Number: ENB211-0111/2025
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise an integer
    int numberOfBooks = 12;

    // Declare and initialise a float
    float pricePerBook = 350.50f;

    // Declare and initialise a character
    char category = 'A';

    // Calculate the total cost
    float totalCost = numberOfBooks * pricePerBook;

    // Display the results
    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Category: %c\n", category);
    printf("Total cost: %.2f\n", totalCost);

    return 0;
}
