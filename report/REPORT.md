# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** MARIANA AKOTH JUMA
- **Registration Number:** ENB 211-0044/2025
- **Programme:** BSc Agricultural and Biosystems Engineering
- **GitHub Username:** Ellawendy
- **Assigned Scenario:** A campus stationery desk calculates the total cost of an order.
- **Variant ID:** TODO
- **Date:** 17/11/2026

## 2. Objectives
 To understand the basics of the C programming language, including how source code is written, compiled, and turned into a runnable program.
To install, configure, and use the Code::Blocks IDE alongside the GNU GCC compiler on Windows.
To practice writing, running, and fixing simple C console programs using variables, data types, and formatted printf() output.
To manage and submit lab work on GitHub using a personal fork, a working branch, commits, and a pull request.


## 3. Software and Hardware Environment

- **Operating System:**  Windows 11
- **IDE:** Code::Blocks 25.03
- **Compiler:** GNU GCC (MinGW64)
- **Hardware:** Hp Elitebook 840 G6


## 4. Code::Blocks Installation and Configuration
 I downloaded the Windows installer for Code::Blocks 25.03 bundled with the MinGW/GCC compiler and installed it on my laptop.
  When I launched Code::Blocks for the first time, it automatically detected the GNU GCC Compiler, which I confirmed as the default compiler.
Next, I created a new C Console Application project named Kioto_C_Lab01 (saved under C:\kioto folder\lab01\Kioto_C_Lab01\) and opened main.c to begin coding.


## 5. Hello Kioto Implementation
 After testing the default starter template, I updated main.c for Exercise 1 to print a personal greeting
 , a note on learning C, and my course of study:

C
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hallo, Emmah!\n");
    printf("I am learning the C programming language.\n");
    printf("Bsc Agricultural and Biosystems Engineering");
    printf("I love my course");

    return 0;
}
When the program ran, the console displayed all four messages
and exited cleanly with status 0 . Because the third printf() line did not end with \n, the last two phrases printed
together on the same line.


## 6. Explanation of C Program Structure
 #include <stdio.h>: Loads the Standard Input/Output header before compilation so the program can recognize and use functions like printf().

main( ): The starting point of every C program, where execution begins.

Braces { }: Group together all the instructions that belong inside the main() function.

Statements: Individual instructions inside main(), each ending with a semicolon (;), that run in order from top to bottom.

Return 0;: Ends the main() function and signals to Windows that the program finished without errors.


## 7. Variables and Data Types
 In Exercise 2, I declared variables with specific data types so the computer knows what kind of value each variable stores,
 and used matching format specifiers inside printf() to display them:
 Variable name       Data Type    Format Specifier        Purpose in programme

  numberOfNoteBooks  int            %d                    Stores the whole number of notebooks ordered (tested with 16 and 10)
  pricePerNoteBook   float          %.2f                  Stores the price of one notebook (125.5f), formatted to two decimal places
  category           char           %c                    Stores a single character representing the stationery category ('A')
  Ordertotal         float          %.2f                  Stores the calculated total cost (numberOfNoteBooks * pricePerNoteBook)



## 8. Personalised Calculation
 For my variant (ENB/211/0044/25), the assigned scenario models a campus stationery desk calculating the total cost of a notebook order.
Primary Run (16 notebooks): 16 × 125.50 = 2008.00 (Console output: Total cost: 2008.00)
Second Test Run (10 notebooks): 10 × 125.50 = 1255.00 (Console output: Total cost: 1255.00)
Both results matched my independent checks on the Windows Calculator .



## 9. Testing and Troubleshooting
 I used Code::Blocks' Build and Run commands to let GCC check for syntax mistakes before launching the console executable.
 Along the way, I encountered and resolved the following issues:
 1.Stray character before #include: An accidental S appeared at the start of line 1 .
  Removing it fixed the preprocessor directive.
 2.Missing semicolon test: When I intentionally removed a semicolon after a printf() statement,
  GCC immediately stopped the build with a syntax error. Putting the semicolon back resolved it right away.
 3.Format specifier typo in summary line: In the combined summary line , writing at.2f instead of at %.2f
  caused 125.50 to print in the Ordertotal position, even though the separate Total cost: line printed 2008.00
  and 1255.00 for 10 books accurately.
  4. Manual calculation check: I verified both 16 × 125.5 = 2,008 and 10 × 125.5 = 1,255 using the Windows Calculator.


## 10. GitHub Workflow
Upstream Repository: https://github.com/Kiotolabs/kioto-ics2175-c-lab01
Personal Fork: https://github.com/emmahmjuma-pixel/kioto-ics2175-c-lab01
Student Branch: student/ENB-211-0044-25/lab01
Pull Request: https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/1
I started by forking the official Kiotolabs repository to my GitHub account and cloning it onto my laptop with GitHub Desktop.
I created a dedicated working branch (student/ENB-211-0044-25/lab01) so I would not edit the main branch directly ,
 committed my C code and report updates step by step after testing, pushed the branch to my fork, and opened a pull request back
 to the upstream repository.


## 11. Screenshots

![Screenshot 1](screenshot%202026-11-20%20122718.png)
![Screenshot 2](screenshot%2026-11-20%123757.png)
![Screenshot 3](screenshot%2026-11-20%124051.png)
![Screenshot 4](screenshot%2026-11-20%124598.png)
![Screenshot 5](screenshot%2026-11-20%125006.png)
![Screenshot 6](screenshot%2026-11-20%125034.png)
![Screenshot 7](screenshot%2026-11-20%131207.png)
![Screenshot8](screenshot%2026-11-20%131236.png)
![Screenshot 9](screenshot%2026-11-20%131328.png)

## 12. Individual Reflection
 In this lab, I learned how C source code is compiled into a Windows executable using GCC inside Code::Blocks,
  how variables store different kinds of values, and how a GitHub fork, branch, and pull request workflow keeps changes organized.
 The trickiest part was getting used to C's strict punctuation especially remembering semicolons at the end of every statement
 and keeping printf() format specifiers (like %.2f) exact so values print in the right place.
  Double-checking that my GitHub Pull Request pointed back to the upstream repository rather than my own fork also took carefuL attention.
   Next time, I will review my format specifiers and newline characters before building,and I will keep practicing C regularly to build speed and confidence.


## 13. Conclusion.
 In this laboratory, I installed and configured Code::Blocks 25.03 with the GNU GCC compiler on Windows 11.
  I wrote, compiled, and tested basic C programs to print formatted text, store values in typed variables, and calculate the stationery order total for variant ENB/211/0044/25 (2008.00 for 16 notebooks and 1255.00 for 10 notebooks).
 Finally, I committed my work to a dedicated branch and submitted it through a GitHub pull request.


