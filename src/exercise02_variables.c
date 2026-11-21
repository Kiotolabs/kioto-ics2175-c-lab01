/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
<<<<<<< Updated upstream
 * Student Name: Jonathan Maritawa Mwaniki
=======
 * Student Name: MWANIKI JONATHAN MARITAWA
>>>>>>> Stashed changes
 * Registration Number: ENB211-0031/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
<<<<<<< Updated upstream
    /* TODO: Declare and initialise an int variable */
    int course_units =6;
    /* TODO: Declare and initialise a float variable */
    float average_score=78.5f;
    /* TODO: Declare and initialise a double variable */
    double tuition_fee=48000.75;

    /* TODO: Declare and initialise a char variable */
    char course_grade ='A';

    /* TODO: Print each value with a label and the correct format specifier */
    printf("Course units: %d\n",course_units);
    printf("Average score:%.1f\n",average_score);
    printf("Tuition fees:%.2f\n",tuition_fee );
    printf("Course grade; %c\n", course_grade);
=======
    int course_units = 6;
    float average_score = 78.5f;
    double tuition_fee = 48000.75;
    char course_grade = 'A';

    printf("course_units d%\n",course_units);
    printf("average score %.1f\n",average_score);
    printf("Tuition fee %.2f\n",tuition_fee);
    printf("Course grade %c\n",course_grade);
>>>>>>> Stashed changes

    return 0;
}
