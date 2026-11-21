# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name: FAITH KAMANTHE
- **Registration Number:ENB211-0020/2025
- **Programme: Bsc. Agricultural and Biosystems Engineering
- **GitHub Username:kamanthekalekye-a11y
- **Assigned Scenario: A student club the amount collected from event tickets.
- **Variant ID:V05
- **Date:20/11/2026

## 2. Objectives
   -To set up a C development environment using code::blocks.
   -To write basic programs utilizing standard input/output and appropriate data types.
   -To impelement a personalized mathematical calculation.
   -To manage version control using GitHub.
   

## 3. Software and Hardware Environment

- **Operating System: Windows 11
- **IDE: Code::Blocks(20.03)
- **Compiler: GNU GCC Compiler(MinGW)
- **Hardware: HP laptop

## 4. Code::Blocks Installation and Configuration

-Downloaded the Code::Blocks installer bundled with the MinGW compiler from the official Code::Blocks website.
-Ran the set up wizard with default settings so both IDE and the MinGW tool chain were installed in the system.
-Opened Code::Blocks navigated to setting >compiler...**,selected **GNU GCC Compiler**Auto-detect**under the **Toolchain executables**tab to verify that 'gcc.exe' and 'g++.exe' were properly linked.
-Verified the set up by creating a test C file , building it and confirming the console output ran without errors.

## 5. Hello Kioto Implementation
This program introduces basic C syntax by using the standard input/output library to print a greeting message to the console.

CODE SNIPPET:
#include <stdio.h>

int main()
{
   printf("Hello,Kioto!\n");

   return 0;
}

![Hello Kioto Output](exercise01_kioto.png)

   

## 6. Explanation of C Program Structure
-#include <stdio.h> :A preprocessor directive that tells the compiler to include the standard input/output header file before compiling , giving the program access to functions like printf() and scanf().
-main():The entry point of every C program. Execution always begins insides the main() function.
-statements : Individual instructions inside a function that tells the computer to perform a specific function.
-return 0: Ends the main() function and sends an exit status  of 0 back to the operating system , signaling that the program run successfully without errors.
-syntax: The set of rules that define how C code must be written so the compiler understands it.

## 7. Variables and Data Types
- int(integer):Used to store whole numbers(e.g., int age=20).Format specifier used:%d.
- float/double: Used to store numbers with decimal points. Format specifier used : %lf or %f.
-char(character): Used to store a single letter or symbol(e.g., char grade='A';).Format specifier used :%c.

## 8. Personalised Calculation
-A student club wants to estimate the total amount of money collected from selling event tickets , where each ticket is priced at 250 and a total of 54 tickets were sold .

Input Values:
-Ticket Price(ticketPrice): 250 as a float/double in C to support currency.
-Tickets Sold(ticketsSold):54 stored as a int in C since its a whole number.

Operation: The program multiplies the number of tickets sold by the price per ticket using multiplication operator.

Total Amount = Tickets Sold*Ticket Price

Results:54*250=13500 

## 9. Testing and Troubleshooting

Compilation and Execution

Each C program was built and tested on Windows using Code::Blocks and the GNU GCC Compiler:
• Building: Saved the source file (Ctrl + S) and compiled the code using Build → Build (Ctrl + F9), verifying that the build log reported 0 errors, 0 warnings.
• Execution: Launched the compiled executable via Build → Run (Ctrl + F10) to inspect the console output.

Controlled Experiments & Troubleshooting

During Part B and Part C, I performed controlled tests to verify program behavior and resolve syntax issues:
• Missing Semicolon Error: I intentionally removed the semicolon (;) from the end of a printf() statement and rebuilt the program. The GCC compiler failed to compile and flagged a syntax error (expected ';' before ...) on the following line because C relies on semicolons to mark where one statement ends and the next begins. Fix: Restored the semicolon and rebuilt cleanly.
• Newline Formatting (\n): I removed \n from the first printf() statement. The program compiled without error, but both sentences merged onto a single line in the console. Fix: Restored \n to force a line break after the first output.
• Calculation Verification: For Exercise 3, I tested my program with my assigned values ([Insert Variable A] and [Insert Variable B]) and independently verified the output ([Insert Result]) using a manual calculator check. I also altered one input value to confirm that the calculated output updated accurately.

## 10. GitHub Workflow
Version control and submission were completed using GitHub and GitHub Desktop following the required Kiotolabs workflow:
• Fork & Clone: Forked the official public starter repository (Kiotolabs/kioto-ics2175-c-lab01) to my personal GitHub account (https://github.com[kamanthakalekye-a11y]/kioto-ics2175-c-lab01) and cloned it locally via GitHub Desktop.
• Individual Branch: Created and switched to a dedicated working branch named student/[ENB211-0020/2025]/lab01 so that all changes remained isolated from main.
• Commits: Recorded my progress across meaningful, incremental commits (e.g., "Complete hello world exercise", "Implement variables and data types", and "Complete personalised calculation and report"). Each commit acts as a saved snapshot of the source code at a specific milestone.
• Pull Request: Pushed the branch to my remote fork (origin) and opened Pull Request #[] ([https://github.com/kamanthekalekye-a11y/kioto-ics2175-c-lab01/pulls]) targeting Kiotolabs/kioto-ics2175-c-lab01 (main) for instructor review and automated GitHub Actions validation.

github.com/kiotolabs/kioto-ics2175-c-lab01/pulls
github.co,/kiotolabs/kioto-ics2175-c-lab01/pull/39
11. Screenshots

03_calculation.png
04_errors.png
Screenshot (3).png
Screenshot (4).png
Screenshot (5).png
Screenshot (7).png
console_setup.png
exercise03_calculation.png

## 12. Individual Reflection
• What I Learned: Through this lab, I learned how the C compilation pipeline works—specifically how an IDE like Code::Blocks uses the GCC compiler to translate human-readable .c source code into a Windows executable. I also learned how to declare typed variables (int, float, char), match them with format specifiers (%d, %.2f, %c), and submit code professionally using Git forks, branches, and pull requests.
• What Was Difficult: Ensuring the GNU GCC compiler toolchain was properly detected in Code::Blocks initially required checking the compiler settings, and keeping track of exact branch naming conventions in GitHub Desktop took careful attention so the Pull Request pointed to the right upstream repository.]
• What I Will Do Differently Next Time: Next time, I will compile and test my C code after every small change rather than writing an entire block before building, making syntax errors much easier to isolate. I will also commit my work to Git even more frequently with detailed commit messages.



## 13. Conclusion
All objectives for ICS 2175 Laboratory 01 were successfully achieved. A working C development environment was configured on Windows using Code::Blocks and GCC, and three functional C programs covering console output, variable declarations, data types, and arithmetic operations were written, verified, and debugged. Finally, the completed source code and documentation were properly version-controlled and submitted via a pull request to the Kiotolabs starter repository.
