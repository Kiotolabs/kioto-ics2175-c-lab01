
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Brian Kibet Kipnakiy
 * Registration Number: ENB211-0036/2025
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise an int variable
    int numberOfBooks = 12;

    // Declare and initialise a float variable
    float pricePerBook = 350.50f;

    // Declare and initialise a double variable
    double distance = 12.75;

    // Declare and initialise a char variable
    char grade = 'A';

    // Display each value
    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Distance: %.2f\n", distance);
    printf("Grade: %c\n", grade);

    return 0;
}
