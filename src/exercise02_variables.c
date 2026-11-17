/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Ruth Owiti
 * Registration Number: Enb211-0122/2025
 */

#include <stdio.h>

int main(void)
{
    int numberOfBooks = 12;
    float pricePerBook = 350.50f;
    double distance = 125.7568;
    char category = 'A';

    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Distance: %lf\n", distance);
    printf("Category: %c\n", category);

    return 0;
}
