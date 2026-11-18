# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** JODEPH KIMANI
- **Registration Number:** ENB211-0023/2025
- **Programme:** Bs.E ABE
- **GitHub Username:** kimkimani78
- **Assigned Scenario:** 
- **Variant ID:** ENB211-0023/2025
- **Date:** 18-11-2026

## 2. Objectives

The main objectives of this laboratory session were to:

Install and configure the Code::Blocks Integrated Development Environment (IDE) together with the GNU Compiler Collection (GCC) for C programming.

Understand the fundamental structure of a C program, including preprocessor directives, the main() function, statements, and return values.

Write, compile, and execute basic console output programs using printf().

Declare and initialize primitive C data types (int, float, double, and char) and display them accurately using their corresponding format specifiers.

Apply arithmetic operators and variables to solve a personalized computational problem.

Practice version control workflows using Git and GitHub (forking, branching, committing, and creating a pull request).

## 3. Software and Hardware Environment

- **Operating System:** windows 11pro
- **IDE:** Code::Blocks 25.03
- **Compiler:** GNU GCC Compiler (MinGW-w64)
- **Hardware:** DESKTOP_VKRMBR2

## 4. Code::Blocks Installation and Configuration

Downloaded the codeblocks-20.03mingw-setup.exe installer from the official Code::Blocks website, which bundles the IDE with the MinGW GCC compiler.

Ran the installer with default settings so that both the IDE and compiler toolchain were installed to C:\Program Files\CodeBlocks.

Launched Code::Blocks and verified the compiler configuration via Settings → Compiler → Global compiler settings → Toolchain executables, confirming that GNU GCC Compiler was selected and the compiler installation directory was properly auto-detected.

Created a dedicated workspace folder for ICS 2175 Lab 01 to organize all .c source files and compiled executables.

## 5. Hello Kioto Implementation

In Exercise 01, a basic C program was written to output two lines of text to the console using the printf() function from the standard input/output library (stdio.h). Each string ended with the newline escape sequence (\n) so the second sentence printed cleanly on a new line.

Source Code
C
/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 01: Hello Kioto
 *
- Student Name: Joseph Kimani
- Registration Number: ENB211-0023/2025
 */

#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying Agricultural and Biosystems Engineering (ICS 2175).\n");

    return 0;
}
Console Output

Hello, Kioto!
I am studying Agricultural and Biosystems Engineering (ICS 2175).

## 6. Explanation of C Program Structure

Every C program relies on core structural components to compile and execute properly:

#include <stdio.h>: A preprocessor directive that tells the compiler to include the Standard Input/Output header file before compilation. This provides access to functions like printf().

int main(void): The mandatory entry point of every C program. Execution always begins at the first line inside main(). int indicates that the function returns an integer status code to the operating system, while void specifies that it accepts no command-line arguments.

Braces { }: Curly braces define the start and end of a code block (the body of the main() function), grouping all statements that belong to it.

Statements (printf(...);): Individual instructions executed sequentially by the program. Every statement in C must be terminated by a semicolon (;).

return 0;: Terminates the main() function and returns 0 to the operating system, signaling that the program executed successfully without errors.


## 7. Variables and Data Types

#include <stdio.h>

int main(void)
{
    int student_age = 20;
    float temperature = 36.6f;
    double pi_value = 3.1415926535;
    char grade_letter = 'A';

    printf("Student Age: %d years\n", student_age);
    printf("Temperature: %.1f C\n", temperature);
    printf("Pi Value: %.5lf\n", pi_value);
    printf("Grade Letter: %c\n", grade_letter);

    return 0;
}

## 8. Personalised Calculation

#include <stdio.h>

int main(void)
{
    double input_value_1 = 15.5;
    double input_value_2 = 4.0;
    double calculation_result;

    calculation_result = input_value_1 * input_value_2;

    printf("Result: %.2lf\n", calculation_result);

    return 0;
}

## 9. Testing and Troubleshooting

Each source file was compiled and executed in Code::Blocks using Build and Run (F9). The Build messages pane was monitored to ensure 0 error(s), 0 warning(s) before verifying console output.

Issue 1 – Backslash in Registration Number Comment: Writing ENB211-0023\2025 inside a single-line comment or string can trigger compiler warnings (unknown escape sequence or multi-line comment continuation). Replacing the backslash with a forward slash (ENB211-0023/2025) resolved the warning cleanly.

Issue 2 – Format Specifier Matching (-Wformat): Ensuring double variables were paired with %lf and float literals included the f suffix (36.6f) prevented type-mismatch compiler warnings.

## 10. GitHub Workflow

Forked Repository: Navigated to the official ICS 2175 Lab 01 repository on GitHub and created a personal fork under account [kimkimani78].

Cloned Locally & Created Branch: Cloned the forked repository to the local machine and created a dedicated feature/submission branch (students/enb211-0023/2025/lab01).

Committed Changes: Added the completed exercise01.c, exercise02.c, exercise03.c, and report files, staging and committing them with descriptive commit messages.

Pushed & Opened Pull Request: Pushed the branch to GitHub(students/enb211-0023/2025lab01) and opened a Pull Request against the upstream repository.

## 11. Screenshots

![alt text](<Screenshot (2).png>)
 ![alt text](<Screenshot (3).png>)
 ![alt text](<Screenshot (6).png>)
 ![alt text](<Screenshot (7).png>)
  ![alt text](<Screenshot (9).png>)

## 12. Individual Reflection

What I Learned: I gained practical experience setting up a C development environment in Code::Blocks, structuring basic C programs, choosing appropriate data types (int, float, double, char), matching format specifiers in printf(), and managing code submissions through Git and GitHub.

What Was Difficult: Paying close attention to syntax precision—such as semicolons, escape sequences (\n vs \), and ensuring format specifiers matched variable data types without triggering -Wformat compiler warnings—required careful debugging at first.

What I Will Do Differently Next Time: I will read the compiler warning messages immediately after every small code change, enable all compiler warnings (-Wall) from the start, and commit changes incrementally after completing each exercise rather than waiting until the end

## 13. Conclusion

.Laboratory 01 successfully introduced the foundations of C programming and modern software development workflows. All three exercises—console printing, variable declaration with typed formatting, and arithmetic computation—were implemented, compiled with zero errors in Code::Blocks using GCC, and verified against expected outputs. Finally, version control skills were reinforced by submitting the completed work via GitHub.