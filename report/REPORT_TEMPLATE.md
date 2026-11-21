# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** SHARON WANJIRU
- **Registration Number:** ENB211-0016\2024
- **Programme:** AGRICULTURE AND BIOSYSTEMS
- **GitHub Username:** SHARONMUCHIRI374-CREATOR
- **Assigned Scenario:**A COMPUTER LAB RECORDS THE TOTAL NUMBER AVAILABLE WORKSTATIONS ACROSS TWO ROOMS
- **Variant ID:**ENB211-0016/2024
- **Date:** 21/11/2026

## 2. Objectives

UNDERSTAND HOW TO DECLARE AND INITIALIZE VARIABLES

## 3. Software and Hardware Environment

- **Operating System:**  Windows 11
- **IDE:** Code::Blocks 25.03
- **Compiler:** GNU GCC
- **Hardware:** 

## 4. Code::Blocks Installation and Configuration

Downloaded code blocks from its official  website
environment was verified by writing a c program

## 5. Hello Kioto Implementation
Hello kioto is the C code that I need to compile and run to produce the greeting
int main( )
# 6. Explanation of C Program Structure

#include<stdio.h>
tells compiler to include the standard Input/Output library
We need this library because our program uses printf()to display text

int main( )
indicates where the program starts executing

{ }
mark beginning and end of the functions instructions

printf("Hello kioto\n");
printf means print formatted output
"Hello kioto" Is the desired text
\n Mean move to a new line
; Marks end of instructions

# 7. Variables and Data Types
In Exercise 2, I declared and initialized four variables using different data types: "int", "float", "double" and "char". The "int" data type was used to store the number of books (15), while "float" stored the temperature (23.4). The "double" data type stored the distance (43.6745) with greater decimal precision, and "char" stored a single character grade ('A').

I used format specifiers in the "printf()" function to display the variable values. "%d" was used for the integer, "%f" for the floating-point and double values, and "%c" for the character. These format specifiers ensure that each value is displayed according to its data type.


## 8. Personalised Calculation
Assigned scenario: A computer laboratory records the total number of available workstations in two rooms.
Variant identification: The personalised scenario was identified using the registration-number-based assignment process. However, identifying the variant ID was challenging because no distinct variant ID was clearly displayed in the assignment instructions or generated task.
Workstations in Room A = 84
Workstations in Room B = 22
Addition (+)

Total workstations = Workstations in Room A + Workstations in Room B
Calculation:
Total workstations = 84 + 22 = 106
Verification: The program output was compared with the calculated result to confirm that the total of 106 workstations was correct.

## 9. Testing and Troubleshooting

Code::Blocks using the Build and Run option to check whether it worked correctly. The programs displayed the expected outputs in the console. During testing, I corrected a variable-name mismatch in Exercise 2, where I had used the wrong variable in a printf() statement. After correcting it, I compiled and ran the program again to confirm that it worked as expected.

## 10. GitHub Workflow
I forked the official Kiotolabs/kioto-ics2175-c-lab01 repository to my GitHub account, sharonmuchiri374-creator, to create my own copy of the lab repository. I then worked on a separate student branch to organise my changes without directly modifying the original repository.
I made changes to the C programming exercises and committed my work to the repository. One of the recorded commit messages was "update exercise two variables". The commits help track the changes made during the practical.
Pull Request: The assignment requires submitting a pull request to the original repository's main branch for review. The pull request link and status should be added once confirmed.

## 11. Screenshots

TODO: Embed screenshots with captions.

## 12. Individual Reflection

TODO: What did you learn? What was difficult? What will you do differently next time?

## 13. Conclusion

TODO: Summarise the laboratory.
