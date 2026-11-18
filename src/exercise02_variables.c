/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: MURIUKI RISPER MUKAMI
 * Registration Number: ENB211-0011/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
   int numberOfCourses = 6;
   float averageMark = 68.5f;
   double distanceToCampusKm = 3.75;
   char section = 'B';

   printf("Number of courses: %d\n", numberOfCourses);
   printf("Average mark: %.1f\n", averageMark);
   printf("Distance to campus (Km): %.2f\n", distanceToCampusKm);
   printf("section: %c\n", section);

   return 0;
}
