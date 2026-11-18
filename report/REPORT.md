# ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING

# LABORATORY 01 REPORT

## Getting Started with C Programming

---

### 1. Cover Information

- **Student Full Name:** Ruth Owiti
- **Registration Number:** ENB211-0122/2025
- **Programme:** Agricultural and Biosystems Engineering (ABE)
- **GitHub Username:** ruthowiti19-netizen
- **Assigned Scenario:** Rectangular demonstration farm plot
- **Variant ID:** ENB211-0122/2025
- **Date:** 17 November 2026

---

### 2. Objectives

The main objective of this laboratory was to introduce the C programming language and develop basic programming skills.

The specific objectives were:

- To understand the basic structure of a C program.
- To install and configure Code::Blocks with a working GCC compiler.
- To write, compile and execute a simple C program.
- To understand variables and different data types used in C programming.
- To perform arithmetic calculations using variables.
- To display program results using appropriate output statements and format specifiers.
- To understand basic version control and the process of submitting programming work through GitHub.

---

### 3. Software and Hardware Environment

The following software and hardware were used during the practical:

- **Operating System:** Windows 11
- **IDE:** Code::Blocks 25.03
- **Compiler:** GNU GCC 14.2.0
- **Programming Language:** C
- **Version Control Platform:** GitHub
- **Git Client:** Git and GitHub Desktop
- **Laptop Model:** HP EliteBook 830 G6
- **RAM:** 8 GB

---

### 4. Code::Blocks Installation and Configuration

Code::Blocks was installed to provide an environment for writing, compiling and executing C programs.

The installation involved obtaining the Windows installer containing the MinGW compiler toolchain. After installation, Code::Blocks was opened and the GNU GCC compiler was selected as the default compiler.

A new Console Application project was created using the C programming language. The project was named `Kioto_C_Lab01`.

The `main.c` source file was opened in the editor, providing the environment required to write and execute C programs.

**Evidence:**

- Screenshot 01: Code::Blocks installation/About dialog.
- Screenshot 02: Project open in Code::Blocks.
- Screenshot 03: Successful build log.

---

### 5. Hello Kioto Implementation

The first exercise involved writing a simple C program that displays a greeting and introduces the student's programme.

The program used the `printf()` function to display two lines of text.

The source code was:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying Agricultural and Biosystems Engineering.\n");

    return 0;
}
```

The program was saved, compiled and executed successfully.

The output displayed was:

```text
Hello, Kioto!
I am studying Agricultural and Biosystems Engineering.
```

This exercise introduced the use of the `printf()` function and demonstrated how text can be displayed on the console.

**Evidence:** Screenshot 04 – Exercise 1 output.

---

### 6. Explanation of C Program Structure

The program consists of several important components.

**`#include <stdio.h>`**

This is a preprocessor directive that includes the standard input and output library. It allows the program to use functions such as `printf()`.

**`int main(void)`**

This defines the main function, which is the starting point of program execution.

**Opening and closing braces `{ }`**

These mark the beginning and end of the main function.

**`printf()`**

This function displays information on the computer screen.

**Newline character (`\n`)**

This moves the output cursor to the next line.

**Semicolon (`;`)**

A semicolon marks the end of a C statement.

**`return 0;`**

This indicates that the program has completed successfully.

---

### 7. Variables and Data Types

The second exercise involved declaring, initialising and displaying four different types of variables.

The variables used were:

| Variable | Data type | Example value |
|---|---|---|
| numberOfBooks | int | 12 |
| pricePerBook | float | 350.50 |
| distance | double | 125.7568 |
| category | char | A |

The data types were selected according to the nature of the values being stored.

- **int:** Used to store whole numbers.
- **float:** Used to store decimal numbers.
- **double:** Used to store decimal values with greater precision.
- **char:** Used to store a single character.

The following format specifiers were used:

| Format specifier | Purpose |
|---|---|
| `%d` | Displays an integer |
| `%.2f` | Displays a floating-point number to two decimal places |
| `%lf` | Used to read a double with `scanf()`; for `printf()`, `%f` displays a double |
| `%c` | Displays a single character |

The exercise demonstrated how different data types are used to store and display information in C programming.

**Evidence:** Screenshot 05 – Exercise 2 output.

---

### 8. Personalised Calculation

The third exercise involved performing a calculation based on an assigned agricultural scenario.

The assigned scenario was a small farm recording the area of a rectangular demonstration plot.

The given values were:

- Plot length = 72 metres
- Plot width = 13 metres
- Required operation = Length × Width

The area of a rectangle is calculated using:

**Area = Length × Width**

Substituting the given values:

**Area = 72 × 13**

**Area = 936 square metres.**

The program used three float variables to store the length, width and calculated area. A char variable was also included to represent the plot category.

The source code was:

```c
#include <stdio.h>

int main(void)
{
    float length = 72;
    float width = 13;

    /* Calculate the area by multiplying length by width. */
    float area = length * width;

    char category = 'A';

    printf("Plot length: %.2f m\n", length);
    printf("Plot width: %.2f m\n", width);
    printf("Plot category: %c\n", category);
    printf("Plot area: %.2f square metres\n", area);

    return 0;
}
```

The program output was:

```text
Plot length: 72.00 m
Plot width: 13.00 m
Plot category: A
Plot area: 936.00 square metres
```

The result was independently verified through manual multiplication.

The input length was also changed from 72 metres to 80 metres to test whether the program would calculate a different result.

The new calculation was:

**80 × 13 = 1040 square metres.**

This demonstrated that changing an input value affects the calculated output.

**Evidence:** Screenshot 06 – Exercise 3 output.

---

### 9. Testing and Troubleshooting

The programs were tested by saving, compiling and executing them in Code::Blocks.

The following tests were performed:

**Testing the Hello Kioto program**

The program was compiled and executed to confirm that it displayed the required greeting and programme introduction.

**Testing a missing semicolon**

A semicolon was temporarily removed from a `printf()` statement. The program produced a compilation error because the statement was incomplete. The semicolon was restored and the program was compiled again.

**Testing the newline character**

The newline character (`\n`) was temporarily removed from a `printf()` statement. This changed how the output appeared on the console because the next text was no longer automatically displayed on a new line.

**Testing the personalised calculation**

The plot length was changed from 72 to 80 metres. The calculated area changed from 936 to 1040 square metres, confirming that the calculation responded correctly to changes in the input.

These tests helped demonstrate the importance of correct syntax and the relationship between input values and program output.

---

### 10. GitHub Workflow

GitHub was used to manage and submit the programming exercises.

The official Kiotolabs student repository was used as the starting point for the practical.

The workflow involved the following activities:

1. Signing into a GitHub account.
2. Forking the official Kiotolabs laboratory repository.
3. Cloning the personal fork to the local computer.
4. Creating an individual working branch.
5. Completing the three programming exercises in the supplied source files.
6. Saving and committing the completed work.
7. Pushing the branch to GitHub.
8. Opening a pull request to the original Kiotolabs repository for review.

The individual branch used was:

```text
student/enb211-0122/2025/lab01
```

The work was organised into meaningful commits covering:

1. Complete Hello Kioto exercise.
2. Complete variables and data types exercise.
3. Complete personalised plot area calculation.

Additional evidence files were also committed to the repository.

A commit records changes made to the repository, while a pull request allows the lecturer to review the submitted work.

**GitHub username:** ruthowiti19-netizen

**Personal fork URL:**

https://github.com/ruthowiti19-netizen/kioto-ics2175-c-lab01

**Original repository URL:**

https://github.com/Kiotolabs/kioto-ics2175-c-lab01

**Pull Request Title:**

ICS 2175 Lab 01: C Programming Fundamentals – Ruth Owiti

**Pull Request URL:**

https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/12

The completed assignment was pushed to the personal GitHub fork, and Pull Request #12 was opened against the original Kiotolabs repository for review.

**Evidence:**

- Screenshot 07: GitHub fork.
- Screenshot 08: Individual feature branch.
- Screenshot 09: Three meaningful commits.
- Screenshot 10: Created pull request.

---

### 11. Screenshots

The following screenshots provide evidence of the practical activities performed.

| Screenshot | Description | Evidence filename |
|---|---|---|
| 01 | Code::Blocks installation/About dialog | `01-codeblocks-about.png` |
| 02 | Project setup in Code::Blocks | `02-project-setup.png` |
| 03 | Successful compilation | `03-successful-build.png` |
| 04 | Exercise 1 – Hello Kioto output | `04-exercise-01-output.png` |
| 05 | Exercise 2 – Variables and data types output | `05-exercise-02-output.png` |
| 06 | Exercise 3 – Personalised calculation output | `06-exercise-03-output.png` |
| 07 | GitHub fork | `07-github-fork.png` |
| 08 | Individual feature branch | `08-feature-branch.png` |
| 09 | Three separate commit screenshots | `evidence commit01.png`, `evidence commit-02.png`, `evidence commit03.png` |
| 10 | Pull request | `pull-request.png` |

Additional exercise evidence files include:

- `exercise-01-hello_kioto.png`
- `exercise02_variables.png`
- `exercise03_personalised_calculation.c.png`

All screenshots and supporting evidence are saved in the `report/evidence/` directory.

---

### 12. Individual Reflection

This laboratory introduced me to the fundamentals of C programming and helped me understand how computer programs are written and executed.

I learned how to use Code::Blocks to create a C project, write source code, compile programs and display results.

I also gained a better understanding of variables and data types, particularly the differences between integers, floating-point numbers, double values and characters.

The personalised calculation helped me understand how arithmetic operations can be applied in programming to solve practical problems related to agricultural engineering.

One of the challenges I encountered was understanding the importance of correct syntax, especially the use of semicolons and newline characters. Testing these changes helped me understand how small modifications can affect program execution.

I also learned the importance of GitHub in storing programming work, tracking changes and submitting projects for review. Working with branches, commits and pull requests helped me understand the importance of version control in programming projects.

In future practicals, I intend to pay more attention to program structure, variable naming and testing my code before submission.

---

### 13. Conclusion

The laboratory successfully introduced the basic concepts of C programming.

I was able to understand the structure of a C program, use Code::Blocks, declare variables, apply different data types and perform arithmetic calculations.

The practical also introduced version control and the use of GitHub for managing and submitting programming assignments.

Overall, the laboratory provided a foundation for understanding C programming and developing problem-solving skills that can be applied in future engineering programming exercises.