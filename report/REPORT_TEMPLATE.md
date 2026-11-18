# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** MURIUKI RISPER MUKAMI
- **Registration Number:** ENB211-0011/2025
- **Programme:** Bsc in Agricultural and Biosystems Engineering
- **GitHub Username:** mukamimuriuki-ui
- **Assigned Scenario:** TODO
- **Variant ID:** V18
- **Date:** 18-11-2026

## 2. Objectives

To set up a C programme environment on Windows using Code::Blocks and GCC, to write, compile and run basic C programs.
To practise declaring variables of different data types and displaying them with printf.
To submit my work using Git and Github through a fork, a branch and a pull request.

## 3. Software and Hardware Environment

- **Operating System:** Windows 11
- **IDE:** Code::Blocks (25.03)
- **Compiler:** GCC 14.2.0 (MinGW-W64 x86_64-ucrt-posix-seh)
- **Hardware:**  HP Elitebook 845 G7 Notebook PC (AMD Ryzen 55 PRO 4655OU, 16 GB RAM)

## 4. Code::Blocks Installation and Configuration

I opened the official Code::Blocks download page (codeblocks.org/downloads/binaries) and downloaded the Windows installer whose name includes mingw-setup, because it bundles the GCC compiler. I ran it with the standard components. When Code::Blocks first launched, it detected the GNU GCC Compiler. To verify, I checked Settings --Compiler -- Toolchain executables and confirmed the compiler executable was gcc.exe in C:\Program Files\CodeBlocks\MinGW\bin. Running gcc --version in PowerShell showed GCC 14.2.0, and Help -- About showed Code::Blocks 25.03.
To create my first project, I chose File -- New -- Project -- Console application -- C, named it Kioto_C_Lab01, selected GNU GCC, and opened main.c under Sources.
I did not have any set-up issue.


## 5. Hello Kioto Implementation

#include <stdio.h>

int main(void)
{
   printf("Hello, Kioto!\n");
   printf("I am learning the C programming language.\n");

    return 0;
}
I typed the program into exercise01_hello_kioto.c, saved it, built it (Ctrl+F9) and ran it (Ctrl+F10). The build reported no errors and the console showed both lines. I completed the author details at the top of the file.

## 6. Explanation of C Program Structure

#include <stdio.h> includes the standard input/output declarations, including printf().
int main(void) defines the main function, where execution begins.
{ } mark the beginning and end of the function body.
printf() displays formatted output on the console.
\n moves the output to a new line.
return 0; ends the program and conventionally reports success.
; ends each statement.
Controlled experiments:
Semicolon: When a semicolon was missing, the build failed with error: expected ';' before 'printf', and the program did not run. The compiler needs the semicolon to know where one statement ends. Text inside quotation marks is only data to display, so changing it doesn't affect compilation.
Missing \n: Instead of getting two separate lines, the output becomes one line of joined words.

## 7. Variables and Data Types
Variable|  Type| Value| Specifier| Why this type
numberOfCourses| int| 6| %d| Whole number
averageMark| float| 68.5| %.1f| Decimal value
distanceToCampusKm| double| 3.75| %.2f| Decimal with greater precision
section| char| 'B'| %c| Single character 
I printed each valuable with a label.The specifier had to match the data type and .1 or .2 sets the number of decimal places shown.


## 8. Personalised Calculation


Calculating the total distance travelled by an oblect moving at a constant average speed over a given period of time 
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 * Variant ID: V18
 * Student Name: MURIUKI RISPER MUKAMI
 * Registration Number: ENB211-0011/2025
 
   Instructions:
  - Declare and initialise one int, one float, one double and one char.
  - Use meaningful variable names.
  - Display each value with the correct printf format specifier.


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


## 9. Testing and Troubleshooting

Compilation & Execution:
Each C source file was compiled using the GCC compiler in the terminal via the command:
gcc exercise03_personalised_calculation.c -o exercise03
The compiled executable was then run using ./exercise03 (or exercise03.exe on Windows) to verify the console output against manual calculations.
  
Troubleshooting & Fixes:
Format Specifier Precision: Initially, using %.f for the timeHours variable caused 1.5 to round to 2 in the terminal output. Updating the specifier to %.1f ensured the exact decimal input (1.5) displayed properly.
  
Mixed Data Type Arithmetic: Multiplying an int (averageSpeed) by a float (timeHours) required storing the result in a float variable (distanceTravelled) so the decimal precision would not be truncated.

## 10. GitHub Workflow

1. Forking & Cloning: Forked the main kioto-ics2175-c-lab01 repository to my personal GitHub account (mukamimuriuki-ui) and cloned it locally to my machine using git clone.
  
2. Branching: Created a dedicated working branch (student/ENB211-0011-2025/lab01) so changes remained isolated from the main branch.

3. Staging & Committing: Added the completed C files and report updates using git add . and committed them with clear messages (e.g., git commit -m "Complete Exercise 03 personalised calculation V18").
  
4. Pushing & Pull Request: Pushed the branch to my remote fork (git push origin feature/lab01-solutions) and opened a Pull Request against the upstream repository.
Repository / PR Link: [Paste your GitHub Pull Request URL here]

## 11. Screenshots

![Code::Blocks Installation and Configuration](<../screenshots/Picture 1.png>) and ![alt text](<../screenshots/Picture 2.jpg>)
![Hello Kioto Implementation](<../screenshots/Picture 3.jpg>) and ![alt text](<../screenshots/Picture 4.png>)
![Contolled Experiment](<../screenshots/Picture 5.png>) and ![alt text](<../screenshots/Picture 6.jpg>)
![Variables and Data Types](<../screenshots/Picture 7.png>) , ![alt text](<../screenshots/Picture 8.png>) and ![alt text](<../screenshots/Picture 9.png>) and ![alt text](<../screenshots/Picture 10.png>)
![Personalised Calculations](<../screenshots/Picture 11.png>) and ![alt text](<../screenshots/Picture 12.png>)

## 12. Individual Reflection

What I learned: I learned how to declare appropriate C data types (int vs. float), perform basic arithmetic operations, control decimal output using printf format specifiers (%.2f), and manage code versions using Git branches and pull requests.
  
What was difficult: Getting used to strict C syntax rules — such as remembering semicolons at the end of every statement and matching the exact format specifiers (%d for integers and %f for floats) with their corresponding variables.
  
Next time: I will compile and test my code incrementally after writing small blocks rather than waiting until the entire file is written, which will make catching formatting or syntax errors much faster.

## 13. Conclusion

What I learned: I learned how to declare appropriate C data types (int vs. float), perform basic arithmetic operations, control decimal output using printf format specifiers (%.2f), and manage code versions using Git branches and pull requests.
  
What was difficult: Getting used to strict C syntax rules—such as remembering semicolons at the end of every statement and matching the exact format specifiers (%d for integers and %f for floats) with their corresponding variables.
  
Next time: I will compile and test my code incrementally after writing small blocks rather than waiting until the entire file is written, which will make catching formatting or syntax errors much faster.
