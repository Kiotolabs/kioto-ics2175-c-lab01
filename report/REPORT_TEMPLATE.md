# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Daniel Kyalo
- **Registration Number:** ENB211-0025/2024
- **Programme:** B.Sc Agricultural And Biosystems Engineering
- **GitHub Username:** kyalo-png
- **Assigned Scenario:** Event ticket revenue
- **Variant ID:** V05
- **Date:** 18/11/2026

## 2. Objectives

Set up and verify the C programming development environment using Code::Blocks and the GCC compiler.

Write, compile, and run a basic C program ("Hello Kioto") to understand standard C program structure.

Declare and initialize variables of appropriate data types and display values using printf format specifiers.

Implement a personalised calculation based on an assigned scenario and variant ID.

Test, debug common syntax or compiler issues, and submit work using a Git/GitHub workflow (fork, branch, commit, pull request).



## 3. Software and Hardware Environment

- **Operating System:** Windows 11 Pro
- 

- **IDE: Code::Blocks Version 25.03
**Compiler:** GCC GNU Compiler via code::blocks version 25.03
- **Hardware:** 4 GB RAM

## 4. Code::Blocks Installation and Configuration

I downloaded the Code::Blocks installer bundled with MinGW (which includes the GCC compiler) and completed the standard installation. After launching Code::Blocks, I verified the toolchain setup by navigating to Settings → Compiler → Toolchain executables, confirming that the compiler installation directory was properly mapped and that gcc.exe (or gcc) was detected as the C compiler.

## 5. Hello Kioto Implementation

For Exercise 1, I implemented a C program (hello_kioto.c) that includes the standard input/output header, prints the greeting "Hello, Kioto!" on the first line, prints a second line introducing my programme (BSc. Agricultural and Biosystems Engineering at JKUAT), and returns 0 to indicate successful execution.

Here is the code 



#include <stdio.h>

int main(void)
{
    /* Print "Hello, Kioto!" */
    printf("Hello, Kioto!\n");
    /* Print a second line introducing your programme or course */
    printf("I am a student of BSc. Agricultural and Biosystems Engineering at JKUAT.\n");
    /* Return 0 */

    return 0;
}

Here is the output

Hello, Kioto!
I am a student of BSc. Agricultural and Biosystems Engineering at JKUAT.

## 6. Explanation of C Program Structure

#include <stdio.h>: Instructs the C preprocessor to include the Standard Input/Output library header before compilation, giving the program access to output functions such as printf().

main(): Serves as the mandatory entry point where program execution starts. Declaring int main(void) specifies that the function accepts no arguments and returns an integer exit status.

Statements: Executable instructions inside main(), each terminated by a semicolon (;), such as the two printf(...) calls.

return 0;: Terminates the main() function and passes 0 back to the operating system to signal normal, error-free execution.

Braces ({ and }): Define the start and end of a code block, enclosing all statements that belong to main().

## 7. Variables and Data Types

In Exercise 2, I declared and initialised variables with meaningful names using int, float, double, and char, then printed each value using its corresponding printf format specifier:

int (pages_printed = 105, specifier %d): Stores whole-number counts such as the number of pages printed.

float (cost_per_page = 3.5f, specifier %f / %.2f): Stores single-precision floating-point values such as the per-page cost (using f on the literal and %.2f to display two decimal places).

double (total_printing_cost = pages_printed * cost_per_page, specifier %lf / %.2lf): Stores double-precision floating-point values for higher numerical precision in calculated totals.

char (grade_category = 'A', specifier %c): Stores a single character enclosed in single quotes ('A').

## 8. Personalised Calculation

Variant ID: V05

Assigned Scenario: Event ticket revenue

Input Values:

input_a = 250

input_b = 120

Operation: Multiplication (total_revenue = input_a*input_b;)

Result: 30000 ( Total revenue: 30000)

Here is the code:

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Daniel Kyalo
 * Registration Number: ENB211-0025/2024
 * Variant ID: V05
 * Scenario: Event ticket revenue
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
    int input_a = 250;
    int input_b = 120;
    int total_revenue = input_a * input_b;

    printf("Total revenue: %d\n", total_revenue);

    return 0;
}

Output:

Total revenue: 30000

## 9. Testing and Troubleshooting

Each program was compiled using Build and Run in Code::Blocks, checking both the compiler build log for warnings/errors and the console window for accurate output.

Issue Encountered 1: [e.g., Compiler reported an expected ; error or a format specifier warning when printing a floating-point variable with %d.]

Resolution: [e.g., Added the missing semicolon on the preceding line / updated the format specifier to %.2f to match the double variable.]

Issue Encountered 2: [e.g., Compiler executable not found on initial launch.]

Resolution: [e.g., Clicked "Auto-detect" under Compiler Toolchain Executables to link the MinGW bin directory.]

## 10. GitHub Workflow

Fork: Forked the course laboratory repository into my personal GitHub account kyalo-png.

Branch: Cloned the forked repository locally and created a dedicated working branch (git checkout -b [student/ENB211-0025/2024/lab01]).

Commits: Staged and committed my C source files and completed lab report using descriptive commit messages .

Pull Request: Pushed the branch to my GitHub fork (git push origin [student/ENB211-0025/2024/lab01])

## 11. Screenshots

<../Screenshots/Screenshot 2026-04-02 061544.png>
<../Screenshots/Screenshot 2026-11-18 192715.png>
<../Screenshots/Screenshot 2026-11-18 194111.png>
<../Screenshots/Screenshot 2026-11-18 194228.png>

## 12. Individual Reflection

What I Learned: I learned how a C source file is compiled into an executable using GCC, how core structural components (#include, main(), statements, braces, and return 0;) work together, how format specifiers map to data types, and how to manage lab deliverables with branches and pull requests on GitHub.

Challenges Faced: [e.g., Ensuring format specifiers matched variable types without compiler warnings, and keeping track of branch naming and PR steps on GitHub.]

Improvements for Next Time: [e.g., Compile incrementally after writing small sections of code, verify all format specifiers carefully, and capture screenshots immediately after each milestone.]

## 13. Conclusion

This laboratory established a solid foundation in C programming and version control. By configuring Code::Blocks with GCC, implementing basic output in Exercise 1, working with typed variables and format specifiers, building a variant-specific calculation, and submitting via GitHub, all objectives of Laboratory 01 were achieved.