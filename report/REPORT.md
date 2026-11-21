# ICS 2175 – Introduction to Computer Programming

## Laboratory 01: Getting Started with C

**Student Name:** Anne Favour Ouma  
**Registration Number:** ENB211-0017/2025  
**Programme:** Bachelor of Science in Agricultural Biosystems Engineering  
**Institution:** Jomo Kenyatta University of Agriculture and Technology (JKUAT)  
**Date:** 21 November 2026  
**Programming Language:** C  

---

## 1. Introduction

This laboratory exercise introduced the fundamentals of C programming using the GCC compiler and Code::Blocks development environment. The practical involved creating, compiling, and executing simple C programs to understand the basic structure of a C program, variable declarations, data types, and arithmetic operations.

The laboratory also provided an opportunity to practise using Git and GitHub for source-code management, version control, and submission of programming work.

## 2. Objectives

The objectives of this laboratory were:

1. To install and configure the C programming environment.
2. To understand the basic structure and syntax of a C program.
3. To write and execute a simple C program that displays a greeting.
4. To declare and initialise variables using different C data types.
5. To perform arithmetic calculations using user-assigned values.
6. To compile, run, and test C programs.
7. To practise version control using Git and GitHub.

## 3. Environment and Setup

The laboratory was carried out using a Windows computer.

The following tools were used:

- **Programming language:** C
- **Integrated Development Environment:** Code::Blocks
- **Compiler:** GCC 14.2.0 (MinGW)
- **Terminal:** Windows PowerShell
- **Version control:** Git
- **Online repository platform:** GitHub

The GCC compiler was installed with Code::Blocks in the following directory:

`C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe`

During setup, the command `gcc --version` was not recognised in PowerShell because the GCC installation directory had not been added to the system PATH environment variable.

To work around this issue, the full path to the GCC executable was used when compiling the programs. This allowed the programs to compile and execute successfully.

## 4. Exercise 1: Hello Kioto

### 4.1 Aim

To write and execute a basic C program that displays a personalised greeting message and introduces the student to the basic structure of a C program.

### 4.2 Source Code

```c
#include <stdio.h>

int main() {
    printf("Hello, Kioto!\n");
    printf("I am studying Agricultural Biosystems Engineering at JKUAT.\n");

    return 0;
}
```

### 4.3 Explanation

- `#include <stdio.h>`: Includes the standard input and output library.
- `int main()`: Defines the main function where program execution begins.
- `printf()`: Displays text on the screen.
- `\n`: Moves the cursor to a new line.
- `return 0;`: Indicates that the program has executed successfully.

### 4.4 Program Output

```text
Hello, Kioto!
I am studying Agricultural Biosystems Engineering at JKUAT.
```

### 4.5 Observation

The program compiled and executed successfully, displaying the greeting and course information in the console without errors. This exercise helped me understand the basic structure of a C program and how the `printf()` function is used to display information.

## 5. Exercise 2: Variables and Data Types

### 5.1 Aim

To understand how variables are declared, initialised, and used in C programming. The exercise also demonstrates different data types and their appropriate format specifiers.

### 5.2 Source Code

```c
#include <stdio.h>

int main() {
    int numberOfStudents = 45;
    float temperature = 26.5f;
    double distance = 12.75;
    char grade = 'A';

    printf("Number of students: %d\n", numberOfStudents);
    printf("Temperature: %.1f\n", temperature);
    printf("Distance: %.2f\n", distance);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### 5.3 Explanation

The program uses four different data types:

| Data Type | Variable | Value | Description |
| :--- | :--- | :--- | :--- |
| `int` | `numberOfStudents` | `45` | Stores whole numbers |
| `float` | `temperature` | `26.5` | Stores decimal numbers |
| `double` | `distance` | `12.75` | Stores decimal values with greater precision |
| `char` | `grade` | `'A'` | Stores a single character |

The format specifiers used include:

- `%d`: Displays an integer.
- `%f`: Displays a floating-point number.
- `%c`: Displays a single character.
- `%.1f`: Displays a decimal number to one decimal place.
- `%.2f`: Displays a decimal number to two decimal places.

### 5.4 Program Output

```text
Number of students: 45
Temperature: 26.5
Distance: 12.75
Grade: A
```

### 5.5 Observation

The program compiled and executed successfully. Each variable displayed the correct value according to its declared data type and format specifier. This exercise helped me understand how different data types are used to store information in C programming.

## 6. Exercise 3: Personalised Calculation

### 6.1 Aim

To apply arithmetic operations in C programming using values assigned through the personalised scenario.

### 6.2 Assigned Scenario

- **Variant ID:** V19
- **Scenario:** Study Hours
- **Input A:** 3 hours per day
- **Input B:** 7 days
- **Operation:** Multiplication
- **Output Label:** Total Study Hours

### 6.3 Calculation

The total study hours are calculated by multiplying the number of study hours per day by the number of days.

- **Total Study Hours** = 3 × 7
- **Total Study Hours** = 21 hours

### 6.4 Source Code

```c
#include <stdio.h>

int main() {
    int studyHoursPerDay = 3;
    int numberOfDays = 7;
    int totalStudyHours = studyHoursPerDay * numberOfDays;

    printf("Study hours per day: %d\n", studyHoursPerDay);
    printf("Number of days: %d\n", numberOfDays);
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}
```

### 6.5 Program Output

```text
Study hours per day: 3
Number of days: 7
Total study hours: 21
```

### 6.6 Independent Verification

The result was independently verified using a calculator:

3 × 7 = 21 hours.

The result produced by the C program was correct.

### 6.7 Observation

The program successfully performed multiplication using the assigned values and displayed the correct total study hours of 21. This exercise improved my understanding of arithmetic operators and how variables can be used in calculations.

## 7. Testing and Troubleshooting

### 7.1 Testing

The three C programs were tested by compiling and executing them using the GCC compiler.

The following tests were performed:

1. **Exercise 1:** Checked whether the program displayed the correct greeting message.
2. **Exercise 2:** Checked whether all four variables displayed their correct values and data types.
3. **Exercise 3:** Checked whether the multiplication operation produced the correct result of 21 hours.

### 7.2 Troubleshooting

During the setup and compilation process, an issue occurred where the GCC compiler was not recognised when using the command `gcc --version` in PowerShell.

The problem was caused by the GCC installation directory not being configured in the system PATH environment variable.

### 7.3 Correction

The problem was worked around by invoking GCC using its full installation path:

`C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe`

This allowed the programs to compile and execute successfully.

### 7.4 Results

All three exercises produced the expected outputs. The personalised calculation was also independently verified using a calculator. The tests confirmed that the programs performed their intended tasks correctly.

## 8. GitHub Workflow

### 8.1 Repository

- **Starter Repository:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01
- **Personal Fork:** https://github.com/beingfav/kioto-ics2175-c-lab01

### 8.2 Forking the Repository

The starter repository was forked to my personal GitHub account. This created an independent copy of the laboratory repository where I could work on the exercises and maintain my changes.

### 8.3 Cloning the Repository

The personal repository was cloned to my local computer using the following directory:

`C:\Users\USER\Documents\kioto-ics2175-c-lab01`

Cloning allowed me to access and modify the project files on my computer.

### 8.4 Creating a Feature Branch

A separate branch was created for the laboratory work.

The branch name used was:

`student/ENB211-0017/2025/Lab-01`

This branch allowed me to work on the laboratory exercises without making changes directly to the main branch.

### 8.5 Commits and Push

Three meaningful commits were made during the development of the laboratory exercises.

The commits documented the progress of the work, including the implementation of the C programs and updates to the project files.

The changes were pushed to my personal GitHub repository.

### 8.6 Pull Request

After pushing the changes, a pull request was created from my personal student branch to the original Kiotolabs repository.

The pull request details are:

- **Pull Request Number:** 41
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/41
- **Target Repository:** Kiotolabs/kioto-ics2175-c-lab01
- **Target Branch:** main

The pull request was submitted for review. It remains open and has not yet been merged.

## 9. Build and Execution Evidence

The three C programs were compiled using the GCC compiler installed with Code::Blocks (MinGW).

The compilation process was carried out using GCC through Windows PowerShell. This was used to check the programs for syntax errors and confirm that executable files could be generated successfully.

The following evidence is included:

1. Screenshot showing Code::Blocks installation or the About dialog.
2. Screenshot showing the project opened in Code::Blocks.
3. Screenshot showing successful compilation.
4. Screenshot showing Exercise 1 executing successfully in the console.
5. Screenshot showing Exercise 2 executing successfully in the console.
6. Screenshot showing Exercise 3 executing successfully in the console.

## 10. Screenshot Evidence

The following screenshots were captured during the laboratory exercise to provide evidence of the installation, project development, program execution and GitHub workflow.

### 10.1 Programming Environment Setup

1. `codeblocks-aboutlog.png` – Evidence of Code::Blocks installation.
2. `projectsetup.png` – Shows the project setup in the development environment.

### 10.2 Program Development and Execution

1. `exercise01-hello-kioto.png` – Exercise 1 source code.
2. `exercise01-output.png` – Exercise 1 execution output.
3. `exercise02-variables.png` – Exercise 2 source code.
4. `exercise02-output..png` – Exercise 2 execution output.
5. `exercise03-personalised-calculation.png` – Exercise 3 source code.
6. `exercise03-output.png` – Exercise 3 execution output.
7. `successful -buildlog.png` – Compilation evidence.

### 10.3 GitHub Workflow Evidence

1. `fork.png` – Evidence of the repository fork.
2. `branch.png` – Evidence of the student feature branch.
3. `comit01.png`, `comit02.png` and `comit03.png` – Evidence of the three commits.
4. `pull-request.png` – Evidence of submitted pull request number 41.

All screenshots are stored in the `report/screenshots/` directory.

## 11. Individual Reflection

Through this laboratory exercise, I gained practical experience in writing, compiling and executing C programs. I learned how to use the `printf()` function to display information, declare variables and work with different data types.

I also learned how to perform arithmetic operations using C programming and verify program results independently.

One of the challenges I encountered was configuring the GCC compiler because PowerShell initially failed to recognise the `gcc` command. I learned how to work around this problem by using the full compiler path.

Additionally, I gained experience using Git and GitHub to manage programming files, create branches, make commits and submit a pull request.

Overall, the practical improved my confidence in programming and helped me understand the importance of testing, troubleshooting and version control when developing software.

## 12. Conclusion

This laboratory exercise provided practical experience in writing, compiling and executing basic C programs. I learned how to display messages using `printf()`, declare and initialise variables using different data types, and perform arithmetic calculations in C.

I also gained experience using GCC to compile and run programs, testing program outputs, and troubleshooting compilation issues. In addition, I practised using Git and GitHub to manage my work through a forked repository, a feature branch, commits and a pull request.

Overall, the laboratory improved my understanding of basic C programming concepts and introduced me to essential programming and version-control workflows.


## 13. Final Submission Checklist

Before submitting the laboratory report, I confirmed that the following items were completed:

- [x] Student details are correctly provided.
- [x] Introduction and objectives are included.
- [x] Exercise 1 source code and output are included.
- [x] Exercise 2 source code and output are included.
- [x] Exercise 3 includes the assigned V19 scenario, calculation, source code, output, and independent verification.
- [x] Testing and troubleshooting are explained.
- [x] GitHub workflow details are provided.
- [x] All relevant screenshots are saved in `report/screenshots/`.
- [x] The conclusion is included.
- [x] The report has been checked for spelling, formatting, and accuracy.
- [x] The GitHub repository and pull request links are included.
