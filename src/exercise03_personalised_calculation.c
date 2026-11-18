/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: NDEGE NELLY NJERI
 * Registration Number: ENB211-0010/2025
 * Variant ID: V15
 * Scenario: A CAMPUS STATIONERY DESK CALCULATES THE TOTAL COST OF AN ORDER.
 *Input value 1 (Variable A - Number of notebooks): 4
 *Input value 2 (Variable B - Price per notebook): 125.5
 *Operation: Multiply
 (quantity * unit price)
 *Required output label: Order total

 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    // Declare input variables with your assigned values
    int quantity = 4;
    double unit_price = 125.5;

    // Declare a result variable
    double order_total;

    //Perform the required arithmetic operation
    order_total = quantity * unit_price;

    // Print the result using the required output label
    printf("Order totaL: %2lf\n", order_total);

    return 0;
}
