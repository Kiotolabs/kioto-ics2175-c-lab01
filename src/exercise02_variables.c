
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: BRIYAN MWENDWA MAKETE
 * Registration Number: ENB211-0027/2025
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise an int variable
    int numberOfBooks = 12;

    // Declare and initialise a float variable
    float pricePerBook = 350.50f;

    // Declare and initialise a double variable
    double totalAmount = 4206.00;

    // Declare and initialise a char variable
    char category = 'A';

    // Print each value with a label
    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Total amount: %.2f\n", totalAmount);
    printf("Category: %c\n", category);

    return 0;
}
