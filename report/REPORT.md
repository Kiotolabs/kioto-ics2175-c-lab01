# JOMO KENYATTA UNIVERSITY OF AGRICULTURE AND TECHNOLOGY
## COLLEGE OF ENGINEERING AND TECHNOLOGY

# ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING
## LABORATORY 01 REPORT

**Student Name:** Brian Kibet Kipnakiy  
**Registration Number:** ENB211-0036/2025  
**Programme:** Agricultural and Biosystems Engineering  
**Course:** Introduction to Computer Programming  
**Course Code:** ICS 2175  
**Laboratory:** Laboratory 01  
**Academic Year:** 2026/2027  
**Institution:** Jomo Kenyatta University of Agriculture and Technology (JKUAT)  
**Date:** 21 November 2026

---

# 1. OBJECTIVES

The objectives of this laboratory exercise were:

1. To understand the fundamentals of C programming.
2. To learn how to create, compile, build and execute C programs.
3. To understand variable declaration, initialisation and different data types in C.
4. To practise displaying information using output statements.
5. To perform arithmetic operations using variables and operators.
6. To identify and correct basic programming errors.
7. To gain practical experience using Git and GitHub for version control.

# 2. INTRODUCTION

C is a general-purpose programming language widely used in developing software, operating systems and other computer applications. It provides a foundation for understanding important programming concepts such as variables, data types, operators, functions and input/output operations.

This laboratory introduced the basic concepts of C programming through practical exercises. The exercises involved writing, compiling, building and executing C programs using the Code::Blocks Integrated Development Environment (IDE).

The laboratory covered three main exercises: displaying a greeting message, declaring and initialising variables using different data types, and performing a personalised arithmetic calculation.

In addition, the laboratory introduced version control using Git and GitHub to manage source code, track changes and submit programming work for review.

# 3. SOFTWARE AND TOOLS USED

The following software and tools were used during the laboratory exercises:

1. **Code::Blocks IDE:** Used for writing, editing, compiling and running C programs.
2. **GNU GCC Compiler:** Used to compile C source code into executable programs.
3. **Windows Operating System:** Provided the environment for performing the programming exercises.
4. **PowerShell/Command Prompt:** Used to execute commands and manage project files.
5. **Git:** Used to track changes and manage different versions of the project.
6. **GitHub:** Used to host the project repository and submit changes through a pull request.

**Environment details:**

- Windows version: [Insert your Windows version]
- Code::Blocks version: [Insert version from About dialog]
- GCC/MinGW version: [Insert confirmed compiler version]

# 4. PROCEDURE AND IMPLEMENTATION

The laboratory exercises were completed through the following procedures:

1. Created a project directory for Laboratory 01.
2. Installed and opened the Code::Blocks programming environment.
3. Created a new C console application.
4. Created separate C source files for the different exercises.
5. Wrote and edited the programs according to the laboratory instructions.
6. Compiled and built the programs to check for errors.
7. Executed the programs to observe and verify their outputs.
8. Captured screenshots showing the source code, project setup, build results and program execution.
9. Used Git to track changes made to the project.
10. Used GitHub to host the repository and manage the submission workflow.

## 4.1 Project Setup

The project was created in Code::Blocks by selecting:

**File → New → Project → Console Application → C**

The project was named `Kioto_C_Lab01`.

The source files were then added to the project for the three programming exercises.

# 5. RESULTS AND DISCUSSION

## 5.1 Exercise 1: Hello Kioto

### Objective

The objective of this exercise was to write a simple C program that displays a greeting message and an introductory statement.

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

### Explanation of the code

- `#include <stdio.h>` includes the standard input/output library, which provides functions such as `printf()`.
- `int main(void)` defines the main function where program execution begins.
- `printf()` displays messages on the console.
- `\n` moves the output to a new line.
- `return 0;` indicates successful program termination.
- Semicolons are used to terminate C statements.

### Expected output

```text
Hello, Kioto!
I am learning the C programming language.
```

### Discussion

The exercise demonstrated the basic structure of a C program and how output can be displayed using the `printf()` function. It also introduced the importance of correct syntax and the use of semicolons and newline characters.

## 5.2 Exercise 2: Variables and Data Types

### Objective

The objective of this exercise was to declare and initialise variables using four different C data types: `int`, `float`, `double` and `char`.

### Source code

```c
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Brian Kibet Kipnakiy
 * Registration Number: ENB211-0036/2025
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise an int variable
    int numberOfBooks = 12;

    // Declare and initialise a float variable
    float pricePerBook = 350.50f;

    // Declare and initialise a double variable
    double distance = 12.75;

    // Declare and initialise a char variable
    char grade = 'A';

    // Display each value
    printf("Number of books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Distance: %.2f\n", distance);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### Variables and values

| Variable | Data type | Initial value | Purpose |
|---|---|---:|---|
| `numberOfBooks` | `int` | 12 | Stores the number of books |
| `pricePerBook` | `float` | 350.50 | Stores the price of one book |
| `distance` | `double` | 12.75 | Stores a decimal distance |
| `grade` | `char` | 'A' | Stores a single character |

### Explanation

1. **Integer (`int`):** Stores whole numbers. It was used to store the number of books.
2. **Float (`float`):** Stores decimal numbers. It was used to store the price per book.
3. **Double (`double`):** Stores decimal numbers with greater precision. It was used to store distance.
4. **Character (`char`):** Stores a single character. It was used to store the grade.

The format specifiers used were `%d` for integers, `%.2f` for decimal values displayed to two decimal places, and `%c` for a character.

### Expected output

```text
Number of books: 12
Price per book: 350.50
Distance: 12.75
Grade: A
```

### Discussion

The exercise demonstrated how different data types are used to store different kinds of information. It also showed the importance of using appropriate format specifiers when displaying variable values using `printf()`.

## 5.3 Exercise 3: Personalised Calculation

### Objective

The objective of this exercise was to apply arithmetic operations in C by using assigned input values to solve a practical calculation.

### Assigned scenario

The assigned scenario involved calculating the total revenue generated from selling event tickets.

### Input values

- Ticket price = 500
- Number of tickets = 80
- Arithmetic operation = Multiplication

### Source code

```c
#include <stdio.h>

int main(void)
{
    // Declare input variables
    int ticketPrice = 500;
    int numberOfTickets = 80;

    // Declare a result variable
    int totalRevenue;

    // Perform multiplication
    totalRevenue = ticketPrice * numberOfTickets;

    // Display the results
    printf("Ticket price: %d\n", ticketPrice);
    printf("Number of tickets: %d\n", numberOfTickets);
    printf("Total revenue: %d\n", totalRevenue);

    return 0;
}
```

### Explanation

- `ticketPrice` stores the price of one ticket.
- `numberOfTickets` stores the number of tickets sold.
- `totalRevenue` stores the result of the multiplication.
- The `*` operator performs multiplication.
- `printf()` displays the input values and the calculated result.

### Mathematical calculation

The total revenue is calculated using:

**Total Revenue = Ticket Price × Number of Tickets**

Substituting the assigned values:

\[
\text{Total Revenue} = 500 \times 80
\]

\[
\boxed{\text{Total Revenue} = 40,000}
\]

### Expected output

```text
Ticket price: 500
Number of tickets: 80
Total revenue: 40000
```

### Independent verification

The result was independently checked by multiplying the ticket price by the number of tickets:

\[
500 \times 80 = 40,000
\]

The calculated result agrees with the program output.

### Discussion

This exercise demonstrated how variables and arithmetic operators can be used to solve practical problems. It also showed how a calculated result can be stored in another variable and displayed using the correct format specifier.

# 6. TESTING AND TROUBLESHOOTING

During the laboratory exercises, testing was necessary to identify errors and confirm that the programs produced the expected outputs.

### 6.1 Compiler setup challenge

Initially, when I entered the command `gcc --version` in PowerShell, the system reported that GCC was not recognised.

This indicated that GCC was not available through the PowerShell system PATH. The compiler configuration in Code::Blocks therefore needed to be checked separately under:

**Settings → Compiler → Toolchain executables**

The configured compiler and its version should be confirmed before recording the issue as fully resolved.

### 6.2 Syntax errors

C programming requires correct syntax. Missing semicolons, incorrect brackets and spelling mistakes can cause compilation errors.

These errors can be corrected by reviewing the source code and checking the compiler's error messages.

### 6.3 Output formatting

The newline character `\n` was used to display each output statement on a separate line. Without it, output from consecutive `printf()` statements may appear on the same line.

### 6.4 Data type and format specifiers

Different data types require appropriate format specifiers. For example, `%d` is used for integers, `%f` for floating-point values and `%c` for characters.

Using the correct format specifiers helps ensure that values are displayed correctly.

### 6.5 Program verification

The output of Exercise 3 was checked independently using the mathematical calculation:

\[
500 \times 80 = 40,000
\]

The result matched the expected program output.

# 7. GIT AND GITHUB WORKFLOW

Git and GitHub were used to manage the laboratory project and track changes made to the source code.

The workflow involved the following stages:

1. **Forking:** Created a personal copy of the original laboratory repository on GitHub.
2. **Cloning:** Downloaded the repository to the local computer.
3. **Branch creation:** Created a separate working branch for the laboratory.
4. **Editing files:** Added and modified the C source files and report.
5. **Committing:** Recorded changes using Git commits.
6. **Pushing:** Uploaded the local branch and its commits to GitHub.
7. **Pull request:** Created a pull request to submit the work for review.

### Importance of commits and pull requests

A **commit** is a recorded set of changes made to a project. It helps track the development history and makes it easier to identify changes.

A **pull request** is a request for changes from one branch to be reviewed and considered for merging into another branch. It allows feedback and review before changes are merged.

# 7. GIT AND GITHUB WORKFLOW

Git and GitHub were used to manage the Laboratory 01 project, track changes and submit the completed work for review.

### 7.1 Repository Details

- **GitHub username:** `254-kibet`
- **Repository:** `kioto-ics2175-c-lab01`
- **Repository URL:** https://github.com/254-kibet/kioto-ics2175-c-lab01
- **Working branch:** `student/ENB211-0036/2025/lab01`
- **Target repository:** `Kiotolabs/kioto-ics2175-c-lab01`
- **Target branch:** `main`
- **Pull request number:** #42
- **Pull request title:** Complete ICS 2175 Laboratory 01 Exercises ENB211-0036/2025
- **Pull request status:** Open
- **Number of commits:** 18
- **Changes recorded:** 46 additions and 42 deletions
- **Files changed:** 14

### 7.2 Workflow Followed

The following Git and GitHub activities were carried out:

1. Forked the original laboratory repository to create a personal copy.
2. Cloned the repository to the local computer.
3. Created the working branch `student/ENB211-0036/2025/lab01`.
4. Added and modified the laboratory source files and supporting documentation.
5. Recorded project changes through Git commits.
6. Pushed the working branch to GitHub.
7. Created Pull Request #42 to submit the work to the original repository for review.

### 7.3 Pull Request

The pull request was created from the personal working branch:

`254-kibet:student/ENB211-0036/2025/lab01`

It targets:

`Kiotolabs:main`

The pull request contains 18 commits and changes across 14 files, with 46 additions and 42 deletions.

**Pull request link:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/42

### 7.4 Importance of Version Control

Git commits provide a record of changes made during development. Branches allow work to be organised separately from the main project, while pull requests allow submitted changes to be reviewed before merging.

At the time of preparing this report, Pull Request #42 was open. Therefore, the work had been submitted for review but had not yet been confirmed as merged.

# 8. REFLECTION AND LESSONS LEARNT

The Laboratory 01 exercises provided practical experience in the fundamentals of C programming and introduced important software development practices.

Through Exercise 1, I learned how to write a basic C program, use the `main()` function and display messages using the `printf()` statement. I also understood the importance of semicolons and newline characters in controlling program structure and output.

Exercise 2 improved my understanding of variables and data types. I learned how to declare and initialise `int`, `float`, `double` and `char` variables and use the correct format specifiers to display their values.

In Exercise 3, I applied arithmetic operations to a practical problem involving event ticket revenue. By multiplying the ticket price of 500 by 80 tickets, I obtained a total revenue of 40,000. This demonstrated how programming can be used to solve everyday mathematical problems.

I also gained experience using Code::Blocks to write, build and execute C programs. The compiler setup challenge helped me understand the importance of configuring a programming environment correctly.

Finally, using Git and GitHub introduced me to version control. I learned how to work with repositories, branches, commits and pull requests. Creating Pull Request #42 helped me understand how programming work can be submitted for review.

Overall, the laboratory improved my programming knowledge, logical thinking, problem-solving skills and ability to manage software development projects.


# 8. REFLECTION AND LESSONS LEARNT

The Laboratory 01 exercises provided practical experience in the fundamentals of C programming and introduced important software development practices.

Through Exercise 1, I learned how to write a basic C program, use the `main()` function and display messages using the `printf()` statement. I also understood the importance of semicolons and newline characters in controlling program structure and output.

Exercise 2 improved my understanding of variables and data types. I learned how to declare and initialise `int`, `float`, `double` and `char` variables and use the correct format specifiers to display their values.

In Exercise 3, I applied arithmetic operations to a practical problem involving event ticket revenue. By multiplying the ticket price of 500 by 80 tickets, I obtained a total revenue of 40,000. This demonstrated how programming can be used to solve everyday mathematical problems.

I also gained experience using Code::Blocks to write, build and execute C programs. The compiler setup challenge helped me understand the importance of configuring a programming environment correctly.

Finally, using Git and GitHub introduced me to version control. I learned how to work with repositories, branches, commits and pull requests. Creating Pull Request #42 helped me understand how programming work can be submitted for review.

Overall, the laboratory improved my programming knowledge, logical thinking, problem-solving skills and ability to manage software development projects.


# 10. EVIDENCE CHECKLIST

The following screenshots were captured and stored in the `report/screenshots/` directory to provide evidence of the laboratory activities.

| No. | Evidence required | Screenshot filename |
|---:|---|---|
| 1 | Code::Blocks installation/About dialog | `aboutlog.png` |
| 2 | Code::Blocks installation evidence | `Codeblock installation blog.png` |
| 3 | Project setup in Code::Blocks | `Project setup.png` |
| 4 | Successful build log showing zero errors and warnings | `successful build log.png` |
| 5 | Exercise 1 source code | `exercise01_hello_kioto.png` |
| 6 | Exercise 1 program output | `exercise01_output.png` |
| 7 | Exercise 2 source code | `exercise02_variables.png` |
| 8 | Exercise 2 program output | `exercise02_output.png` |
| 9 | Exercise 3 program output | `exercise03_output.png` |
| 10 | Git branch evidence | `branch.png` |
| 11 | Git commit history | `commit01.png`, `commit02.png`, `commit03.png` |
| 12 | Repository fork evidence | `fork.png` |
| 13 | Pull request evidence | `full request.png` |

### GitHub submission evidence

- **GitHub repository:** https://github.com/254-kibet/kioto-ics2175-c-lab01
- **Pull Request #42:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/42
- **Pull request status:** Open

### Final verification

Before submitting the report, confirm the following:

-# 10. EVIDENCE CHECKLIST

The following screenshots were included in the `report/screenshots/` directory as evidence of the laboratory activities.

- [x] Code::Blocks installation/About dialog – `aboutlog.png`
- [x] Code::Blocks installation evidence – `Codeblock installation blog.png`
- [x] Project setup in Code::Blocks – `Project setup.png`
- [x] Successful build log – `successful build log.png`
- [x] Exercise 1 source code – `exercise01_hello_kioto.png`
- [x] Exercise 1 program output – `exercise01_output.png`
- [x] Exercise 2 source code – `exercise02_variables.png`
- [x] Exercise 2 program output – `exercise02_output.png`
- [x] Exercise 3 source code
- [x] Exercise 3 program output – `exercise03_output.png`
- [x] Git branch evidence – `branch.png`
- [x] Git commit history – `commit01.png`, `commit02.png`, `commit03.png`
- [x] Repository fork evidence – `fork.png`
- [x] Pull request evidence – `full request.png`

### GitHub submission details

- **Repository:** https://github.com/254-kibet/kioto-ics2175-c-lab01
- **Pull Request:** https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/42
- **Status:** Open

**Report location:** `report/REPORT.md`
