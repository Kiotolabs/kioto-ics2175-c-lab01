# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Abednego Nayiya Jimba
- **Registration Number:** ENB211-0046/2025
- **Programme:** Agricultural and Biosystems Engineering
- **GitHub Username:** abednego19
- **Assigned Scenario:** A student club estimates the amount from the event tickets
- **Variant ID:** ENB211-0046/2025
- **Date:** 16/11/2026

## 2. Objectives
-Set up a C programming environment on windows using Code::Blocks and GCC compiler.
-Write, compile, and run basic C programs printf() and standard format specifiers.
-Use Git, GitHub Desktop and GitHub to fork a repository, manage branches, commit changes, and submit a pull Request.

## 3. Software and Hardware Environment
- **Operating System:** Windos 10 
- **IDE:** Code::Blocks 25.03 
- **Compiler:** GCC GNU compiler
- **Hardware:** Evolve 3 Masterpiece, 4GB Ram 

## 4. Code::Blocks Installation and Configuration
-I downloaded the code::blocks 20.03 installer bundled with the MinGW GCC compiler for windows.I ran the setup wizard with the default setting so both the Code::Blocks IDE and GNU GCC compiler were installed together. I opened Code::Blocks, navigated to settings, compiler and comfirmed that GNU GCC compiler was detected as the default compiler under the 'Toolchain executable' tabs. 

## 5. Hello Kioto Implementation
s In exercise 1('src/exercise01_hello_kioto.c'), I used 'printf()' to display the greeting '"Hello Kioto!"'  on the first line and introduced my programme ('"I am studying Agricultural and Bisystems Engineering."')
#include <stdio.h>

{
printf("Hello, Kioto!\n");
printf("I am studying Agricultural and Biosystems Engineering.\n");

return 0;
}

## 6. Explanation of C Program Structure
-'#include stdio.h>': Preprocessor directive that imports the Standard Input/Output library so functions like 'printf()' can be used.
-'main()': The entry-point function where program execution begins.
-Braces '{' and '}' Encloses the block of code belonging to the 'main()' function.
-Statements: Individual instructions inside 'main', each ending with a semicolon ';'.
-'return 0;': Ends the 'main()' function and signals to the operating system that program finished without errors.

## 7. Variables and Data Types
In Exercise 2 ('src/exercise02_variables.c'), I declared four variables:
-'int studentAge = 20;'(whole number, printed with '%d').
-'float bodyTemperature 98.6f;' (single-precision decimal mumber, printed with '%.2f').
-'double campusDistance = 100.50;' (double-precision decimal, number printed with '%.2f').
-'char gradeCode = 'A';' (single character, printed with '%c').

## 8. Personalised Calculation
-**Variant ID:**ENB211-0046/2025
-**Scenario:** A student club estimates the amount collected from event tickets.
-**Inputs & Operation:** 'int ticketsSold = 72;' and 'double ticketPrice = 250.00;', multiplied together ('ticketRevenue = ticketsSold * ticketPrice;').
-**Result:** 'Ticket revenue: 1800.00' (displayed using '%.2f')

## 9. Testing and Troubleshooting
I compiled each C source file in Code::Blocks using GCC compiler ('Build -> Compile current file') and tested the console output. During testing, I fixed a 'printf' spelling typo ('printif') in Exercise 1, restored a missing closing comment '*/' in Exercise 2 that caused an undeclared variable error, and verified 'error(s), 0warning(s)' across all three exercises.

## 10. GitHub Workflow
-**Fork URL:** https://github.com
-**Branch:** 'student/ENB211-0046/2025/lab01'
-**Commits:** Created separate commits for Exercise 1, Exercise 2,Exercise 3, and the completed laboratory report using GitHub Desktop, then pushed the branch and opened a Pull Request to 'Kiotolabs/kioto-ics2175-c-lab01' ('main').

## 11. Screenshots
- 01_codeblocks_about.png
- 02_codeblocks_project.png
- 03_build_log.png
- 04_ex1_console.png
- 05_ex2_console.png
- 06_ex3_console.png
- 07_github_fork.png
- 08_feature_branch.png
- 09_commits_history.png
- 10_pull_request.png
## 12. Individual Reflection
-**What I learned:** I learned how to structure a C program, declare typed variables ('int', 'float', 'double', 'char'), format output with 'printf()', and manage version control using GitHub Desktop branches, commits, and Pull Requests.
-**What was difficult:** Debugging compiler errors caused by small syntax mistakes, such as misspelling 'printf' and accidentally deleting a closing comment delimeter ('*/'), as well as settng up GitHub Desktop for the first time.
-**What I will do differently next time:** I will double-check spelling and matching comment tags before compiling, commit each exercise incrementally as soon as it builds cleanly, and try my best to finish the task in the time allocated(3hrs).

## 13. Conclusion
-In this laboratory, I successfully configured Code::Blocks with GCC, imlemented and tested three C proramming exercise covering output formatting, data types, and arithmetic calculations, and submitted the completed codebase and report through a structured GitHub Pull Request workflow.