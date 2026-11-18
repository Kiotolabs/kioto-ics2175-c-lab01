# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** MARIANA AKOTH JUMA
- **Registration Number:** ENB211-0044/2025A
- **Programme:** agricultural and biosystems engineering
- **GitHub Username:** Ellawendy
- **Assigned Scenario:** A campus stationery desk calculates the total cost of an order.
- **Variant ID:** ENB211-0044/2025
- **Date:** 18/11/2026

## 2. Objectives

.To understand the basics of the C programming language, including how source code is written, compiled, and turned into an executable program.

To learn how to install, set up, and use the Code::Blocks IDE alongside the GNU GCC compiler.

To practice writing, running, and troubleshooting simple C console programs using variables, data types, and formatted printf() outputs.

To learn how to manage and submit practical work using Git and GitHub through a personal fork, a working branch, commits, and a pull request.



## 3. Software and Hardware Environment

- **Operating System:**  Windows 11
- **IDE:**  Code::Blocks 25.03
- **Compiler:**   GNU GCC MinGW64
- **Hardware:** HP EliteBook 840 G6

## 4. Code::Blocks Installation and Configuration
    I downloaded the Windows installer package that comes bundled with the MinGW/GCC compiler and installed Code Blocks
     onto my laptop .
     When I opened Code Blocks for the first time, it automatically detected the GNU GCC Compiler,
     and I confirmed it was selected as my default compiler.
      I created a new C Console Application project named Kioto_C_Lab01 and opened main.c to begin coding.

## 5. Hello Kioto Implementation
      I wrote a simple program to print text to the console and updated it to display a greeting and my course of study
 int main(void)
{
    printF("Hallo, Kioto!\n");
    printF("I am learning the C programming language.\n");
    printF("agricultural and biosystems engineering");

    return 0;
}


## 6. Explanation of C Program Structure
  inclide - This line brings in the Standard Input/Output library before the code compiles,
   which lets the program recognize and use printf
   main( )- This is the starting point of every C program.
  Braces -Theyare used to  group together all the instructions that belong inside main().
   Statements -Ensures each line of instruction inside main() runs in order from top to bottom.
   Returns -It is used to end the main() function and reports back to Windows, letting the system know the program finished without err



## 7. Variables and Data Types
 I created variables with specific data types so the computer knows what kind of information
 is being stored and used matching format specifiers to print them:
  variable name         Data type
  numberOfBooks           int
  pricePerBook            float
  category                char
  totalCost               float
## 8. Personalised Calculation
   Variant ID: ENB/211/0044/25

Assigned Scenario: A campus stationery desk calculates the total cost of an order.

Input Values and Operation:
 Variable A (Number of notebooks): 16 (int)

Variable B (Price per notebook): 125.5 (float)

Required Calculation: quantity × unit price (16 * 125.5)

Output Label: Order total

 result ;5608


## 9. Testing and Troubleshooting
   Compiling and Running: I used Build  to let GCC check my code for mistakes before launching it with Run .

   Issues Encountered and Fixed:

 1. Missing Semicolon Test: When I intentionally deleted a semicolon after a printf() line during the experiment,
   GCC immediately stopped building and showed a syntax error putting the semicolon back fixed the build right away

 2. Checking Calculations; Before finalizing my variant numbers (16 and 125.5), I also double-checked an earlier test calculation on the Windows Calculator to be sure my multiplication
  logic worked properly.   .


## 10. GitHub Workflow
   Upstream Repository: [https://github.com/Kiotolabs/kioto-ics2175-c-lab01](https://github.com/Kiotolabs/kioto-ics2175-c-lab01)

   Personal Fork: [https://github.com/emmahmjuma-pixel/kioto-ics2175-c-lab01](https://github.com/emmahmjuma-pixel/kioto-ics2175-c-lab01)

  Student Branch: student/ENB-211-0044-25/lab01
  Pull Request: [https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/1](https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/1)

How I Used GitHub:
   I started by forking the official Kiotolabs repository to my personal GitHub account and cloning it onto my laptop using GitHub Desktop.
    I created a separate working branch so I would not edit directly, committed my C code and report updates step by step after testing them ,
     pushed the branch to my fork .


## 11. Screenshots

TODO: Embed screenshots with captions.

## 12. Individual Reflection
 I learned how C code is compiled into a Windows executable using GCC inside Code
  Getting used to C's strict punctuation especially remembering semicolons at the end of every line and making sure output labels matched the
  instructions took careful attention, as did making sure my GitHub Pull Request pointed back to the upstream repository rather than my own fork.
   Iwill practice more inordr to get used to using the c language.

## 13. Conclusion

  In this lab, I installed and set up Code::Blocks 25.03 with the GCC compiler on my laptop.
   I practiced writing and running basic C programs to print text, use variables, and calculate the stationery ordertotal of 5608.00
   XZ for my variant (ENB/211/0044/25). Finally, I saved my work and submitted it through a GitHub pull request.
