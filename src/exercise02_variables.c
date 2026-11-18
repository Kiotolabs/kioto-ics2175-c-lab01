/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: TODO
 * Registration Number: TODO
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    /* TODO: Declare and initialise an int variable */
    /* TODO: Declare and initialise a float variable */
    /* TODO: Declare and initialise a double variable */
    /* TODO: Declare and initialise a char variable */
    int numberOfBooks = 12;
    float pricePerBook = 350.50f;
    char category = 'A';
    double discounted_price = 340.94;

    /* TODO: Print each value with a label and the correct format specifier */
     printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Category: %c\n", category);
    printf("discounted_price: %.2lf\n", discounted_price);


    return 0;
}
