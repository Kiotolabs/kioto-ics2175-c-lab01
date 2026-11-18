# ICS 2175 – LABORATORY 01 REPORT

## Introduction to Computer Programming: Getting Started with C

## 1. Cover Information

- **Student Full Name:** Patrick Nthanga Mutiso
- **Registration Number:** ENB211-0026/2025
- **Programme:** Agricultural and Biosystems Engineering
- **GitHub Username:** patoh104
- **Assigned Scenario:** Rectangular farm demonstration plot area calculation
- **Variant ID:** ENB211-0026/2025
- **Submission Date:** 18 November 2026

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
| Operating system | Microsoft Windows 11 Pro |
| IDE | Code::Blocks 25.03 |
| Compiler | GCC 14.2.0 (64-bit) |
| wxWidgets | 3.2.7 |
| Terminal | Windows PowerShell 5.1 |
| Laptop | HP EliteBook 840 G3 |
| Installed RAM | 7.88 GB (approximately 8 GB) |
| Programming language | C |

The GCC compiler was installed as part of the Code::Blocks MinGW environment. The compiler version was checked from PowerShell using its full executable path.

## 4. Code::Blocks Installation and Configuration

Code::Blocks 25.03 was used as the integrated development environment (IDE) for writing and managing C programs. The MinGW GCC 14.2.0 compiler was available in the Code::Blocks installation.

The compiler version was checked using:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" --version
```

The laboratory source files were organised in the repository's src directory. PowerShell was also used to compile and execute individual C source files.

The Code::Blocks About dialog and project setup screenshots are included in the report/screenshots directory.

## 5. Hello Kioto Implementation – Exercise 1

Exercise 1 involved writing a simple C program that displays a greeting and introduces the programming language.

### Source Code

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

- `#include <stdio.h>` includes the standard input/output library, which provides functions such as printf().
- `int main(void)` defines the main function, where program execution begins.
- `printf()` displays text on the screen.
- `\n` moves the output to a new line.
- `return 0;` indicates successful program termination.

### Compilation and Execution

The source file was compiled using GCC through PowerShell:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" .\src\exercise01_hello_kioto.c -o exercise01.exe
```

The executable was run using:

```powershell
.\exercise01.exe
```

### Output

```text
Hello, Kioto!
I am learning the C programming language.
```

Exercise 1 was successfully compiled and executed through PowerShell. Its execution screenshot is included as `04-exercise01-output.png`.

## 6. Explanation of C Program Structure

A basic C program consists of several important components.

### a) Header File

`#include <stdio.h>` includes the standard input/output library, which provides functions such as printf().

### b) Main Function

`int main(void)` defines the main function. It is where execution of the program begins.

### c) Braces

The opening `{` and closing `}` braces define the beginning and end of a block of code.

### d) Statements

Statements are instructions executed by the computer. For example:

```c
printf("Hello, Kioto!\n");
```

### e) Semicolon

A semicolon marks the end of a C statement.

### f) Return Statement

`return 0;` indicates that the program has completed successfully.

## 7. Variables and Data Types – Exercise 2

Exercise 2 introduced the declaration and use of variables in C.

### Source Code

```c
#include <stdio.h>

int main(void)
{
    int numberOfPlots = 2;
    float plotLength = 24.0;
    char plotGrade = 'A';

    printf("Number of plots: %d\n", numberOfPlots);
    printf("Plot length: %.2f metres\n", plotLength);
    printf("Plot grade: %c\n", plotGrade);

    return 0;
}
```

### Explanation of Data Types

| Data type | Variable | Value | Purpose |
|---|---|---|---|
| int | numberOfPlots | 2 | Stores a whole number |
| float | plotLength | 24.0 | Stores a decimal number |
| char | plotGrade | 'A' | Stores a single character |

### Format Specifiers

- `%d` displays an integer.
- `%.2f` displays a floating-point number to two decimal places.
- `%c` displays a single character.

### Output

```text
Number of plots: 2
Plot length: 24.00 metres
Plot grade: A
```

The Exercise 2 execution evidence is included as `05-exercise02-output.png`.

## 8. Personalised Calculation – Exercise 3

The personalised calculation involved determining the area of a rectangular farm demonstration plot.

### Given Information

- Length = 24 metres
- Width = 13 metres
- Plot category = A

### Formula

Area of a rectangle:

\[
A = L \times W
\]

### Calculation

\[
A = 24 \times 13
\]

\[
A = 312\ m^2
\]

### C Source Code

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

The calculated area was **312.00 square metres**. This demonstrates how C programming can be applied to a practical agricultural calculation.

The Exercise 3 output evidence is included as `06-exercise03-output.png`. If the screenshot was produced using an online compiler, it should be labelled as online compiler output rather than local Code::Blocks execution.

## 9. Testing and Troubleshooting

The laboratory programs were prepared and tested using the GCC compiler and the available execution environments. The evidence screenshots for the three exercises are included in the report screenshots folder.

Several challenges were encountered during the process.

### a) Incorrect Directory

Initially, PowerShell was opened in a directory that did not contain the laboratory source files. The problem was corrected by navigating to the repository directory before running the commands.

### b) Incorrect Source File Execution

Code::Blocks initially displayed the output of the farm plot calculation when Exercise 1 was expected. This was traced to a different project/source file being built and executed. The correct Exercise 1 source file was subsequently compiled and run directly through PowerShell.

### c) Windows Execution Restriction

During testing, Windows security controls blocked execution of a locally generated executable on one occasion. Smart App Control was kept enabled. The testing evidence should identify the application or environment that produced each output and should not describe a blocked run as successful.

These challenges improved my understanding of file paths, source files, compilation and program execution.

## 10. GitHub Workflow and Pull Request

GitHub was used to manage and submit the laboratory source files.

- **GitHub Username:** patoh104
- **Fork Repository:** https://github.com/patoh104/kioto-ics2175-c-lab01
- **Original Repository:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01
- **Student Branch:** `student/ENB211-0026/2025/lab01`

The three exercise commits were:

1. Add Hello Kioto C program
2. Add C variables and data types exercise
3. Add personalised farm area calculation

The Pull Request also contains a further commit for completing and verifying the laboratory exercises. GitHub displayed four commits in the Pull Request.

### Pull Request Details

- **Pull Request:** #6
- **Title:** ICS 2175 Lab 01: Getting Started with C – ENB211-0026/2025
- **Author:** patoh104
- **Source Branch:** `student/ENB211-0026/2025/lab01`
- **Target Repository:** Kiotolabs/kioto-ics2175-c-lab01
- **Status when checked:** Open
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/6

The Pull Request screenshot and commit-history screenshot are included in the report/screenshots directory.

An open Pull Request means the submission has been proposed for review; it does not mean that it has already been merged.

## 11. Screenshots and Evidence

The following evidence files are included in the report/screenshots directory:

1. `01-codeblocks-about.png` – Code::Blocks About dialog showing version 25.03.
2. `02-project-open.png` – laboratory project open in Code::Blocks.
3. `03-successful-build.png` – successful build log, if the captured log shows a successful build.
4. `04-exercise01-output.png` – Exercise 1 output.
5. `05-exercise02-output.png` – Exercise 2 output.
6. `06-exercise03-output.png` – Exercise 3 output.
7. `07-github-fork.png` – GitHub fork repository.
8. `08-github-branch.png` – student branch.
9. `comit 1.png,commit 2.png,commit 3.png – GitHub commit history.
10. `10-github-pull-request.png` – Pull Request #6.

The screenshots provide evidence of the programming environment, exercise outputs, repository, branch, commits and Pull Request.

Confirm that the filenames above match the actual files saved in the folder.

## 12. Individual Reflection

Through this laboratory, I gained practical experience in writing and executing C programs. I learned how to include header files, define the main function, use printf(), declare variables and work with different data types.

I also learned how to compile C programs using GCC through PowerShell and how to organise programming projects using GitHub.

One challenge was navigating to the correct project directory and ensuring that the correct source file was being compiled and executed. Solving these problems improved my understanding of the programming environment.

The personalised farm plot calculation helped me understand how programming can be used to solve practical agricultural engineering problems. I also gained experience using GitHub for source-code management and version control.

## 13. Conclusion

The laboratory introduced the fundamental concepts of the C programming language and provided practical experience in preparing, compiling and executing simple programs.

The exercises demonstrated the use of output statements, variables, data types and mathematical operations. The rectangular farm plot calculation gave an area of **312.00 square metres**, demonstrating the application of programming in agricultural and biosystems engineering.

The laboratory also introduced version control through GitHub. The work was submitted through Pull Request #6 for review.

---

## Final Submission Checklist

- [x] Student name and registration number are included.
- [x] Variant ID is included as supplied by the student.
- [x] Software and hardware details are recorded.
- [x] Exercise source code and explanations are included.
- [x] GitHub repository, branch and Pull Request details are included.
- [x] Evidence screenshots have been added, as confirmed by the student.
- [ ] Confirm that every screenshot filename matches the actual file in report/screenshots.
- [ ] Confirm that the Exercise 2 and Exercise 3 screenshots show the correct output and identify the execution environment accurately.
- [ ] Confirm that the Pull Request is still open or update its status if it has changed.