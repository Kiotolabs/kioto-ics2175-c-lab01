# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** John Chege
- **Registration Number:** ENB211-0004/2025
- **Programme:** BSc. Agriculture and Biosystems Engineering
- **GitHub Username:** kamurijohn30-dot
- **Assigned Scenario:** Total study time calculation across two sessions (morning and evening)
- **Variant ID:** None
- **Date:** 18/11/2026

## 2. Objectives

The objective of this laboratory was to master the foundational setup of the C programming environment using Code::Blocks and GCC, understand basic C program structure, declare and use variables of various data types (int, float, double, char), perform arithmetic operations, format output using appropriate printf format specifiers, and manage version control using GitHub.

## 3. Software and Hardware Environment

- **Operating System:**  Windows 11 pro
- **IDE:** Code::Blocks 25.03
- **Compiler:** GCC (GNU GCC Compiler / MinGW toolchain)
- **Hardware:** HP EliteBook 840 G6

## 4. Code::Blocks Installation and Configuration

Code::Blocks and the MinGW GCC compiler suite were configured locally to create a standard workspace. A new console application project (Kioto_C_Lab01) was initialized via the IDE wizard, linking directly to the GCC toolchain with default debugging and release target configurations.

## 5. Hello Kioto Implementation

Exercise 1 involved creating a basic greeting program to verify compiler functionality and console output formatting.

C
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying BSc. Agriculture and Biosystems Engineering (ICS 2175).\n");
    return 0;
}

Console Output:

Plaintext
Hello, Kioto!
I am studying BSc. Agriculture and Biosystems Engineering (ICS 2175).

Process returned 0 (0x0)   execution time : 0.118 s
Press any key to continue.

## 6. Explanation of C Program Structure

The structure of a C program relies on header inclusions (#include <stdio.h>), the main entry point function (int main(void)), execution statements delimited by semicolons, return 0; to signal successful termination, and block boundaries enclosed in curly braces {}. Each statement sequentially guides the execution flow from setup to return.

## 7. Variables and Data Types

In Exercise 2, variables of four distinct data types were declared, initialized, and displayed with proper format specifiers:

int (Integer): morningStudyHours = 2 — Used for whole-number counting. Format specifier: %d.

float (Single-precision floating-point): studyRate = 1.5f — Used for fractional values requiring moderate precision. Format specifier: %.1f.

double (Double-precision floating-point): exactStudyTarget = 10.75 — Used for high-precision decimal numbers. Format specifier: %.2lf.

char (Character): studyCategory = 'A' — Used to store a single alphanumeric symbol. Format specifier: %c.

## 8. Personalised Calculation

Based on the assigned variant (V03), the scenario evaluated total student study time across separate daily sessions.

Assigned Scenario: Total study time calculation across two sessions.

Input Values: morningStudyHours = 2, eveningStudyHours = 3.

Operation: Addition (morningStudyHours + eveningStudyHours).

Result: 5.

Source Code:
C
#include <stdio.h>

int main(void)
{
    int morningStudyHours = 2;
    int eveningStudyHours = 3;
    int totalStudyHours;

    totalStudyHours = morningStudyHours + eveningStudyHours;

    printf("Morning study hours: %d\n", morningStudyHours);
    printf("Evening study hours: %d\n", eveningStudyHours);
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}
Console Output:
Plaintext
Morning study hours: 2
Evening study hours: 3
Total study hours: 5

Process returned 0 (0x0)   execution time : 0.025 s
Press any key to continue.

## 9. Testing and Troubleshooting

During compilation and testing inside Code::Blocks, initial build logs verified proper linking via the GNU GCC compiler. Minor warnings regarding format specifier matching were resolved by ensuring %d was strictly utilized for integer variables (int), and appropriate specifiers (%f / %lf) were matched to floating-point declarations.

## 10. GitHub Workflow

Repository URL: [https://github.com/JohnChege/Kioto_C_Lab01](https://github.com/JohnChege/Kioto_C_Lab01)

Branch Name: main

Commit Summary: Completed Laboratory 01 exercises including Hello Kioto, variable declarations, and personalized study hour calculations.

Pull Request URL: [https://github.com/JohnChege/Kioto_C_Lab01/pull/1](https://github.com/JohnChege/Kioto_C_Lab01/pull/1)

Concepts:
Commit: A recorded snapshot of changes made to files in the repository, providing a detailed history of project evolution.

Pull Request: A mechanism to propose changes and merge branches, facilitating code review and version integration.

## 11. Screenshots

![alt text](<../screenshots/Kioto 1.png>)![alt text](<../screenshots/Kioto 7.png>)
![alt text](<../screenshots/Kioto 2.png>)![alt text](<../screenshots/Kioto 9 (before 8).png>)![alt text](<../screenshots/Kioto 10.png>)
![alt text](<../screenshots/Kioto 3.png>)
![alt text](<../screenshots/Kioto 4.png>)![alt text](<../screenshots/Kioto 13.png>)
![alt text](<../screenshots/Kioto 5.png>)
![alt text](<../screenshots/Kioto 6.png>)
![alt text](<../screenshots/Kioto 7.png>)

## 12. Individual Reflection

What I learned: Gained hands-on proficiency in structuring C files, utilizing format specifiers accurately, and handling basic data storage in memory.

What was difficult: Ensuring exact alignment between data types (int, float, double, char) and their respective format specifiers (%d, %f, %lf, %c) initially required careful cross-referencing.

What you would do differently next time: Implement user-interactive inputs via scanf() from the start to validate dynamic data handling earlier in the testing cycle.

## 13. Conclusion

All objectives for Laboratory 01 were successfully accomplished. The C environment was properly configured, programs for output generation, variable typing, and arithmetic calculations were implemented, tested, and verified, and work was successfully tracked via version control.