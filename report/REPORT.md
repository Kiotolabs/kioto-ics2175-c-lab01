# ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING
# LABORATORY 01 REPORT

**Student Name:** Valentine Ndunge  
**Registration Number:** ENB211-0026/2024  
**Variant ID:** ENB211-0026/2024  
**Scenario:** Workstations in Room A and Room B  
**Programming Language:** C  
**Programming Environment:** Programiz Online C Compiler  

---

# 1. INTRODUCTION

This report presents the work completed for Laboratory 01 of ICS 2175 – Introduction to Computer Programming.

The laboratory introduced the C programming language, basic program structure, variables, data types, formatted output, and simple calculations.

Three exercises were completed to demonstrate the basic concepts of C programming.

# 2. OBJECTIVES

The objectives of this laboratory were:

- To understand the basic structure of a C program.
- To write and execute a simple C program.
- To learn how to declare and use variables.
- To understand different C data types.
- To use printf() to display program output.
- To perform calculations using arithmetic operators.
- To practise using GitHub to manage and submit programming work.

# 3. SOFTWARE AND HARDWARE

**Hardware:**
- Windows-based personal computer.
- Internet connection.

**Software and tools:**
- Programiz Online C Compiler.
- Google Chrome web browser.
- Windows PowerShell.
- Git and GitHub.
-codeblocks

# 4. DEVELOPMENT ENVIRONMENT AND CONFIGURATION

The laboratory required the use of a C programming environment.

I initially attempted to use a local compiler through PowerShell. However, Windows security restrictions blocked the compiler setup or execution.

To continue with the laboratory exercises, I used Programiz Online C Compiler. This allowed me to compile, execute, and test the C programs online.

Programiz was therefore used as an alternative programming environment.



# 5. EXERCISE 01: HELLO KIOTO

## Objective

To write a simple C program that displays a greeting and an introductory statement.

## Source Code

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am learning the C programming language.\n");

    return 0;
}
```

## Output

```text
Hello, Kioto!
I am learning the C programming language.
```

## Explanation

The `#include <stdio.h>` directive allows the program to use standard input and output functions.

The `main()` function is the starting point of the program.

The `printf()` function displays text on the screen.

The `return 0;` statement indicates that the program has completed successfully.

# 6. EXERCISE 02: VARIABLES AND DATA TYPES

## Objective

To declare and use different C data types, including int, float, double, and char.

## Source Code

```c
#include <stdio.h>

int main(void)
{
    int numberOfBooks = 12;
    float pricePerBook = 350.50f;
    double totalCost = 4206.00;
    char category = 'A';

    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Total cost: %.2f\n", totalCost);
    printf("Category: %c\n", category);

    return 0;
}
```

## Output

```text
Number of books: 12
Price per book: 350.50
Total cost: 4206.00
Category: A
```

## Explanation

The program demonstrates four different data types:

- `int` stores whole numbers.
- `float` stores decimal numbers.
- `double` stores decimal numbers with greater precision.
- `char` stores a single character.

The format specifier `%d` displays an integer, `%.2f` displays a decimal number to two decimal places, and `%c` displays a character.

# 7. EXERCISE 03: PERSONALISED CALCULATION

## Objective

To perform a calculation based on the assigned scenario.

## Scenario

A computer laboratory has workstations in two rooms:

- Room A contains 56 workstations.
- Room B contains 22 workstations.

The program calculates the total number of workstations by adding the two values.

## Source Code

```c
#include <stdio.h>

int main(void)
{
    int workstationsRoomA = 56;
    int workstationsRoomB = 22;

    int totalWorkstations = workstationsRoomA + workstationsRoomB;

    printf("Workstations in Room A: %d\n", workstationsRoomA);
    printf("Workstations in Room B: %d\n", workstationsRoomB);
    printf("Total workstations: %d\n", totalWorkstations);

    return 0;
}
```

## Output

```text
Workstations in Room A: 56
Workstations in Room B: 22
Total workstations: 78
```

## Explanation

The program declares two integer variables:

- `workstationsRoomA` stores 56.
- `workstationsRoomB` stores 22.

The addition operator `+` is used to calculate the total.

The result is stored in the variable `totalWorkstations`.

The calculation is:

**56 + 22 = 78**

Therefore, the total number of workstations is 78.

# 8. TESTING AND TROUBLESHOOTING

All three exercises were entered, compiled, and executed using Programiz Online C Compiler.

The following results were observed:

1. Exercise 01 successfully displayed the greeting and introductory statement.
2. Exercise 02 successfully displayed the values of the four different data types.
3. Exercise 03 successfully calculated and displayed the total of 78 workstations.

During the setup process, Windows security restrictions prevented the attempted local compiler workflow through PowerShell. Programiz was used as an alternative to continue practising C programming.

# 9. GITHUB WORKFLOW

GitHub was used to manage and submit the laboratory programming work.

The workflow involved:

1. Creating a fork of the laboratory repository.
2. Creating a feature branch for the laboratory.
3. Adding and organising the C source files.
4. Committing changes to the repository.
5. Pushing the feature branch to GitHub.
6. Creating a pull request to the original repository.

The pull request should remain open unless the lecturer gives further instructions.

# 10. SCREENSHOTS AND EVIDENCE

Screenshots should be inserted in this section to demonstrate the work completed.

/*report/screenshots */ folder

# 11. REFLECTION

This laboratory helped me understand the fundamentals of C programming.

I learned how to write a basic C program, use the `printf()` function, declare variables, and work with different data types.

I also learned how to use arithmetic operators to perform calculations and how to organise programming work using GitHub.

Although Windows security restrictions prevented me from using the local compiler, Programiz Online C Compiler allowed me to complete and test the exercises.

# 12. CONCLUSION

Laboratory 01 provided practical experience in the basics of C programming.

The three exercises demonstrated how to display output, declare and use variables, work with different data types, and perform calculations.

The personalised calculation successfully produced a total of 78 workstations from Room A and Room B.

The laboratory also introduced the use of GitHub for managing and submitting programming assignments.