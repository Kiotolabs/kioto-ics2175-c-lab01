# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Lawrence Ndiritu Gitonga 
- **Registration Number:** ENB211-0011/2024
- **Programme:** B.Sc. Agricultural and Biosystems Engineering
- **GitHub Username:** Lawrencegitonga091-dot
- **Assigned Scenario:** A small farm records the area of a rectangular demonstration plot.
- **Variant ID:** None
- **Date:** 18/11/2026

## 2. Objectives

To understand and configure the C development environment using Code::Blocks and the GCC compiler.

To write, compile, and execute basic C console applications.

To declare and initialize variables using suitable numeric data types (int and float).

To perform arithmetic operations, store results in variables, and apply correct format specifiers (%d, %.2f) during input/output operations (printf/scanf).

To practice version control and collaboration workflows using github

## 3. Software and Hardware Environment

- **Operating System:**  Windows 11 pro
- **IDE:** Code::Blocks 25.03(MInGW)
- **Compiler:** GCC GNU Compiler
- **Hardware:** HP ProBook x360 11 G1 EE,4GB

## 4. Code::Blocks Installation and Configuration

Description: Downloaded the Code::Blocks installer bundled with MinGW (codeblocks-20.03-mingw-setup.exe). Executed the installation wizard using standard options, ensuring the GNU GCC compiler toolchain was correctly registered and mapped in the toolchain executables settings

## 5. Hello Kioto Implementation

Description: Implemented a foundational "Hello, World!" style program tailored to the local context (Hello Kioto) to verify that the compiler and build system were fully operational.

Output code:

#include <stdio.h>

int main() {
    printf("Hello, Kioto!\n");
    return 0;
}

Output:
Hello, Kioto!

Process returned 0 (0x0)   execution time : 0.058 s
Press any key to continue.

## 6. Explanation of C Program Structure

#include <stdio.h>: A preprocessor directive that imports the Standard Input/Output library header, enabling the use of functions like printf() and scanf().

int main(): The mandatory entry point function where C program execution begins. The int keyword indicates that the function returns an integer status code to the operating system.

Statements: Individual instructions terminated by a semicolon (;), such as variable assignments or function calls.

return 0;: Signals to the operating system that the program executed successfully without errors.

Braces ({ }): Define the scope and boundaries of code blocks (such as the body of the main function).

## 7. Variables and Data Types

In the advanced farm plot program (Checkpoint C), multiple variables were declared across two different data types to handle measurements and financial estimates:

int (Integer data type): Used for whole-number measurements like plot_length (48), plot_width (13), and calculated plot_area (624).

float (Floating-point data type): Used for fractional values requiring decimal precision, such as cost_per_sq_meter (12.50) and total_cost.

Format Specifiers:

%d: Used with printf and scanf to format signed decimal integers.

%.2f: Used with printf to format floating-point numbers constrained to exactly two decimal places (ideal for currency).

## 8. Personalised Calculation

Scenario: A small farm recording the area and estimated clearing/fencing cost of a rectangular demonstration plot.Assigned Input Values:Length = $48\text{ m}$Width = $13\text{ m}$Operation: $\text{Area} = \text{Length} \times \text{Width}$Result: $48 \times 13 = 624\text{ sq m}$Extended Calculation: At a rate of $\$12.50\text{ per sq m}$, the total cost evaluates to $624 \times 12.50 = \$7,800.00$.

Output code:

#include <stdio.h>

int main() {
    // 1 & 2. Variable declaration and initialization
    int plot_length = 48;
    int plot_width = 13;
    int plot_area;
    
    float cost_per_sq_meter = 12.50f;
    float total_cost;

    // 3. Calculation stored in variables
    plot_area = plot_length * plot_width;
    total_cost = plot_area * cost_per_sq_meter;

    // 4 & 5. Displaying with meaningful labels and format specifiers
    printf("--- Farm Demonstration Plot Report ---\n");
    printf("Plot length (m): %d\n", plot_length);
    printf("Plot width (m): %d\n", plot_width);
    printf("Operation: %d * %d\n", plot_length, plot_width);
    printf("Plot area: %d sq m\n", plot_area);
    printf("Cost per sq meter: $%.2f\n", cost_per_sq_meter);
    printf("Total estimate: $%.2f\n", total_cost);

    return 0;
}

Output:

--- Farm Demonstration Plot Report ---
Plot length (m): 48
Plot width (m): 13
Operation: 48 * 13
Plot area: 624 sq m
Cost per sq meter: $12.50
Total estimate: $7800.00

Process returned 0 (0x0)   execution time : 0.153 s
Press any key to continue.

## 9. Testing and Troubleshooting

Compilation Test: Built the project in Code::Blocks using Build -> Build and Run (shortcut F9). Verified zero warnings and zero errors in the build log.

Troubleshooting Note: Initially encountered a minor mismatch when forgetting the f suffix on the floating-point literal (12.50), which GCC flagged as a double-to-float truncation warning. Resolved by explicitly declaring 12.50f.

## 10. GitHub Workflow

Repository Setup: Forked the lab repository template from the course organization.

Branching & Commits: Created a working branch (student/ENB211-0011/2025/lab01), made incremental atomic commits (git commit -m "Add checkpoint c farm plot solution"), and pushed changes to remote.

Pull Request: Opened a Pull Request back to the main branch with a descriptive summary of the completed lab tasks.

## 11. Screenshots

[Code::Blocks IDE displaying the initial "Hello Kioto!" C program source code inside main.c.!](<../screenshots/kioto 1.png>)
[Console terminal window showing the successful execution output of the basic greeting program.!](<../screenshots/kioto 2.png>)
[Code::Blocks build log showing a compilation error (missing semicolon) flagged on line 7 during testing.!](<../screenshots/kioto 3.png>)
[Code::Blocks IDE showing the updated source code with personalized print statements for your degree program, along with a build termination status.!](<../screenshots/kioto 4.png>)
[Console output window displaying the printed personalized introduction statements successfully.!](<../screenshots/kioto 5.png>)
[Code::Blocks IDE showing the source code for the farm plot calculation program utilizing integer variables for length, width, and area.!](<../screenshots/kioto 6.png>)
[Console execution window displaying the computed plot area ($48 \times 13 = 624\text{ sq m}$).!](<../screenshots/kioto 7.png>)
[Code::Blocks IDE showing the extended Checkpoint C implementation using mixed data types (int and float) for cost estimation.!](<../screenshots/kioto 8.png>)
[Console terminal output displaying the complete Farm Demonstration Plot Report, including formatted floating-point currency values.!](<../screenshots/kioto 9.png>)

## 12. Individual Reflection

What I learned: How to properly configure a C toolchain, manage memory variables across different numeric data types (int vs float), and utilize precise formatting tokens like %d and %.2f for formatted console output.

What was difficult: Remembering syntax rules unique to C, such as missing semicolons and matching correct format specifiers to variable types.

What I will do differently next time: Double-check variable type compatibility prior to compilation to catch formatting warnings early.

## 13. Conclusion

Laboratory 01 successfully established a working C development environment and reinforced foundational programming concepts including variable scoping, data typing, arithmetic calculations, and standard input/output formatting.