/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: VICTOR KOOME MUTWIRI
 * Registration Number: ENB211-0042/2025
 * Variant ID: ENB211-0042/2025
 * Scenario: A learner calculates the distance travelled over a fixed duration.
 *
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
    /* --- PART 1: Assigned Values --- */
    /* TODO: Declare input variables with your assigned values */
    char vehicle_category = 'B';   // Single character category
    int average_speed = 48;        // Whole number speed in km/h
    float time = 1.5f;             // Decimal value for hours

    /* TODO: Declare a result variable */
    float distance_travelled;      // Decimal result for distance

    /* TODO: Perform the required arithmetic operation */
    distance_travelled = average_speed * time;

    /* TODO: Print the result using the required output label */
    printf("Vehicle category: %c\n", vehicle_category);
    printf("Average speed (km/h): %d\n", average_speed);
    printf("Time taken (hours): %.1f\n", time);
    printf("Distance travelled (km): %.2f\n", distance_travelled);
    printf("A vehicle of category %c covered a distance of %.2f km at a speed of %d km/h for %.1f hours.\n\n",
           vehicle_category, distance_travelled, average_speed, time);

    /* --- PART 2: Extra Optional Assignment (User Input) --- */
    printf("--- User Input Version ---\n");
    printf("Enter Vehicle category: ");
    scanf(" %c", &vehicle_category);

    printf("Enter average speed: ");
    scanf("%d", &average_speed);

    printf("Enter time taken: ");
    scanf("%f", &time);

    // Recalculate using user-entered values
    distance_travelled = average_speed * time;

    printf("Vehicle category: %c\n", vehicle_category);
    printf("Average speed (km/h): %d\n", average_speed);
    printf("Time taken (hours): %.1f\n", time);
    printf("Distance travelled (km): %.2f\n", distance_travelled);
    printf("A vehicle of category %c covered a distance of %.2f km at a speed of %d km/h for %.1f hours.\n",
           vehicle_category, distance_travelled, average_speed, time);

    return 0;
}
