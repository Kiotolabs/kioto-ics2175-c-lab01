# ICS 2175 – LABORATORY 01 REPORT
## Introduction to Computer Programming: Getting Started with C

## 1. Cover Information

- **Student Full Name:** Patrick Nthanga Mutiso
- **Registration Number:** ENB211-0026/[VERIFY YEAR]
- **Programme:** Agricultural and Biosystems Engineering
- **GitHub Username:** patoh104
- **Assigned Scenario:** Rectangular farm plot area calculation
- **Variant ID:** [INSERT ASSIGNED VARIANT ID]
- **Date:** 17 November 2026

## 2. Objectives

The main objectives of this laboratory were:

1. To understand the basic structure and syntax of the C programming language.
2. To install and configure Code::Blocks and the GCC compiler.
3. To write, compile and execute simple C programs.
4. To understand variables and data types such as int, float and char.
5. To use printf() to display information on the screen.
6. To apply programming concepts in solving a practical agricultural calculation.
7. To practise version control using GitHub, including forking, branching and committing source files.

## 3. Software and Hardware Environment

| Component | Description |
|---|---|
| Operating system | Windows [VERIFY VERSION] |
| IDE | Code::Blocks [VERIFY VERSION] |
| Compiler | GCC 14.2.0 |
| Terminal | Windows PowerShell 5.1 |
| Laptop | HP EliteBook [VERIFY MODEL] |
| Programming language | C |

The GCC compiler was installed as part of the Code::Blocks MinGW environment. Its version was checked using the compiler executable directly from PowerShell.

## 4. Code::Blocks Installation and Configuration

Code::Blocks was used as the integrated development environment for writing and managing C programs.

The MinGW GCC compiler was used to compile the C source files into executable programs.

The compiler installation was verified through PowerShell using:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" --version
```

The compiler returned GCC version 14.2.0.

The laboratory source files were organised in the repository's `src` directory. PowerShell was also used to compile and execute the individual C programs.

**Evidence:** Insert the Code::Blocks About dialog and project screenshots in the screenshots section.

## 5. Hello Kioto Implementation – Exercise 1

Exercise 1 involved writing a simple C program that displays a greeting and introduces the programming language.

### Source code

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am learning the C programming language.\n");

    return 0;
}
```

### Explanation

The `#include <stdio.h>` directive allows the program to use standard input and output functions.

The `main()` function is the starting point of program execution. The `printf()` function displays text on the screen.

The `\n` escape sequence moves the output to a new line. Finally, `return 0` indicates successful program termination.

### Compilation and execution

The source file was compiled using GCC through PowerShell:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" .\src\exercise01_hello_kioto.c -o exercise01.exe
```

The program was executed using:

```powershell
.\exercise01.exe
```

### Actual output

```text
Hello, Kioto!
I am learning the C programming language.
```

The program compiled and executed successfully.

## 6. Explanation of C Program Structure

A basic C program consists of several important components.

### a) Header file

`#include <stdio.h>` includes the standard input/output library, which provides functions such as `printf()`.

### b) Main function

`int main(void)` defines the main function. It is where execution of the program begins.

### c) Braces

The opening `{` and closing `}` braces define the beginning and end of a block of code.

### d) Statements

Statements are instructions executed by the computer. For example:

`printf("Hello, Kioto!\n");`

### e) Semicolon

A semicolon marks the end of a C statement.

### f) Return statement

`return 0;` indicates that the program has completed successfully.

## 7. Variables and Data Types – Exercise 2

Exercise 2 introduced the declaration and use of variables in C.

The program used the following variables:

```c
int numberOfPlots = 2;
float plotLength = 24.0;
char plotGrade = 'A';
```

### Explanation of data types

| Data type | Variable | Value | Purpose |
|---|---|---|---|
| int | numberOfPlots | 2 | Stores a whole number |
| float | plotLength | 24.0 | Stores a decimal number |
| char | plotGrade | 'A' | Stores a single character |

### Format specifiers

- `%d` displays an integer.
- `%.2f` displays a floating-point number to two decimal places.
- `%c` displays a single character.

### Expected output

```text
Number of plots: 2
Plot length: 24.00 metres
Plot grade: A
```

The execution screenshot and final testing result will be added after verifying Exercise 2.

## 8. Personalised Calculation – Exercise 3

The personalised calculation involved determining the area of a rectangular farm plot.

### Given information

- Length = 24 metres
- Width = 13 metres
- Plot category = A

### Formula

Area of a rectangle:

Area = Length × Width

### Calculation

Area = 24 × 13

Area = 312 m²

### C source code

```c
#include <stdio.h>

int main(void)
{
    float plotLength = 24.0;
    float plotWidth = 13.0;
    float plotArea;
    char plotCategory = 'A';

    plotArea = plotLength * plotWidth;

    printf("Farm Plot Area Calculation\n");
    printf("---------------------------\n");
    printf("Plot category: %c\n", plotCategory);
    printf("Plot length: %.2f metres\n", plotLength);
    printf("Plot width: %.2f metres\n", plotWidth);
    printf("Plot area: %.2f square metres\n", plotArea);

    return 0;
}
```

### Output

```text
Farm Plot Area Calculation
---------------------------
Plot category: A
Plot length: 24.00 metres
Plot width: 13.00 metres
Plot area: 312.00 square metres
```

The calculated area was 312.00 square metres. This demonstrates how C programming can be applied to agricultural calculations.

**Variant ID:** [INSERT ASSIGNED VARIANT ID]

## 9. Testing and Troubleshooting

The laboratory programs were compiled using the GCC compiler and tested through Windows PowerShell.

Several challenges were encountered during the process.

### a) Incorrect directory

Initially, PowerShell was opened in a directory that did not contain the laboratory source files. The problem was corrected by navigating to the correct repository directory.

### b) Incorrect source file execution

Code::Blocks initially displayed the output of the farm plot calculation when Exercise 1 was expected. This was traced to the wrong program being built and executed.

The correct Exercise 1 source file was subsequently compiled directly through PowerShell.

### c) Compilation and execution

Exercise 1 was successfully compiled and executed. Its output matched the expected greeting.

The farm plot calculation output was also obtained and showed the correct result of 312.00 square metres.

Exercise 2 execution and the final Code::Blocks build evidence will be added after verification.

These challenges improved my understanding of file paths, source files, compilation and program execution.

## 10. GitHub Workflow

GitHub was used to manage and submit the laboratory source files.

The original laboratory repository was forked to my GitHub account.

**GitHub username:** `patoh104`

**Fork repository:**

https://github.com/patoh104/kioto-ics2175-c-lab01

The student branch created for the assignment was:

`student/ENB211-0026/2026/lab01`

The following commit messages were used for the three exercises:

1. Add Hello Kioto C program
2. Add C variables and data types exercise
3. Add personalised farm area calculation

The source files were maintained in the `src` directory.

The final submission will be made through a Pull Request from the student branch to the original repository.

**Pull Request URL:** [INSERT AFTER CREATING THE PULL REQUEST]

## 11. Screenshots

The following evidence will be included in the report:

1. Code::Blocks installation or About dialog.
2. Laboratory project open in Code::Blocks.
3. Successful build log showing zero errors and zero warnings.
4. Exercise 1 successful execution.
5. Exercise 2 successful execution.
6. Exercise 3 successful execution.
7. GitHub fork repository.
8. Student branch.
9. Three GitHub commits.
10. Pull Request.

Each screenshot will be saved in the `report/screenshots/` directory and labelled appropriately.

## 12. Individual Reflection

Through this laboratory, I gained practical experience in writing and executing C programs.

I learned how to include header files, define the main function, use printf(), declare variables and work with different data types.

I also learned how to compile and execute C programs using GCC through PowerShell.

One of the challenges I encountered was navigating to the correct project directory and ensuring that the correct source file was being executed. Solving these problems improved my understanding of the programming environment.

The personalised farm plot calculation helped me understand how programming can be used to solve practical agricultural engineering problems.

I also gained experience using GitHub for source-code management and version control.

## 13. Conclusion

The laboratory introduced the fundamental concepts of the C programming language and provided practical experience in writing, compiling and executing simple programs.

The exercises demonstrated the use of output statements, variables, data types and mathematical operations.

The personalised farm plot calculation produced an area of 312.00 square metres, demonstrating the application of programming in agricultural and biosystems engineering.

The laboratory also introduced the importance of version control through GitHub, which supports organised development and collaboration.