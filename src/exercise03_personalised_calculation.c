
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: MARIANA AKOTH JUMA
 * Registration Number: ENB211-0044/2025
 * Variant ID: TODO    V02
 * Scenario: TODO     campus stationery desk calculates the total cost of an order.
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */
    //Variable A number of note books =16
    //variable B price per note book =125.5
    //Required calculation - number of notebooks *price per notebook
   // Arithmetic operation - 16*125.5=
   // Required  output label -Order total


#include <stdio.h>

int main(void)
{
     int numberOfNOTEBooks=16;
     float pricePerNoteBook=125.50F;
     char category='A'

     float Ordertotal=numberOfNOTEBooks*pricePerNoteBOOK;

     printf("Number of books; 5d/n" ,numberOfNOTEBooks);
     printf("Price per book; 5.2f/n",pricePerNoteBooks);
     printf("Category: 5c/n", category);
     printf("Total cost :%.2f/n" ,Ordertotal);
     printf("Ordered %d notebooks in category %cat.2f each ,for an Ordertotal of %.2f.\n",
            numberOfNOTEBooks ,category ,pricePerNoteBook ,Ordertotal);


   return 0;
{



