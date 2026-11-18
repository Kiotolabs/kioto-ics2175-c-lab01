/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: MARIANA AKOTH JUMA
 * Registration Number:  ENB211-0044/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{

    int numberOfBooks=12;
  float pricePerBook=350.50;
  char category='A'

  float totalCost=numberOfBooks*pricePerBook;

    printf("Number of books :5d/nm " ,numberOfBooks);
    printf("Price per book;%,2f/n ",pricePerBook);
    printf("Category;%c/n" ,category);
    printf("Total cost; %.2f/n", totalCost);




    return 0;
}
