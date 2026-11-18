# ICS 2175 – LABORATORY 01 REPORT

## 1. Cover Information

- **Student Full Name:** WINNY AKINYI OCHIENG
- **Registration Number:** ENB211-0121/2025
- **Programme:** Agricultural and Biosystems Engineering
- **GitHub Username:** akinyiochieng2006-bot
- **Assigned Scenario:** Distance Travelled
- **Variant ID:** REG B
- **Date:** 18 November 2026

## 2. Objectives

The main objectives of this laboratory were:

1. To install and configure Code::Blocks and the GCC compiler.
2. To understand the basic structure of a C program.
3. To learn how to write, compile and run C programs.
4. To understand variables and different data types in C.
5. To perform mathematical calculations using arithmetic operators.
6. To learn how to use GitHub to manage and submit programming projects.

## 3. Software and Hardware Environment

The following software and hardware were used during this laboratory:

- **Operating System:** Windows 11
- **IDE:** Code::Blocks version 25.03.0.1
- **Compiler:** GCC version 14.2.0 (MinGW-W64)
- **Laptop Model:** Dell Latitude 5320
- **RAM:** 16 GB

## 4. Code::Blocks Installation and Configuration

I installed Code::Blocks on my laptop to provide an environment for writing and running C programs. I also checked the GCC compiler to ensure that it was installed correctly.

The GCC compiler was found inside the Code::Blocks MinGW folder. I verified the compiler version using PowerShell.

After setting up the programming environment, I opened Code::Blocks and prepared my project for the laboratory exercises.

**Screenshots:**

1. `01-codeblocks-installation.png` – Evidence of Code::Blocks installation or About dialog.
2. `02-project-in-codeblocks.png` – The laboratory project opened in Code::Blocks.
3. `03-successful-build.png` – Successful compilation showing zero errors and zero warnings.

## 5. Hello Kioto Implementation

In Exercise 1, I created a simple C program to display a greeting message.

The program uses the `printf()` function to display text on the screen.

The code used was:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am a student of Agricultural and Biosystems Engineering.\n");

    return 0;
}
```

The program displayed the greeting message successfully when executed.

**Screenshot:**

`04-exercise1-output.png` – Output of Exercise 1 running in the console.

## 6. Explanation of C Program Structure

A C program consists of different parts that work together.

- **#include:** This is a preprocessor directive that allows the program to use library functions. For example, `stdio.h` provides the `printf()` function.
- **main():** This is the main function where program execution begins.
- **Statements:** These are instructions given to the computer to perform specific tasks.
- **Braces { }:** These indicate the beginning and end of a block of code.
- **return 0;:** This indicates that the program has completed successfully.

Understanding these parts helped me learn how a basic C program is written and executed.

## 7. Variables and Data Types

In Exercise 2, I declared and initialized four variables using different C data types.

The variables used were:

| Variable | Data type | Value |
|---|---|---|
| numberOfBooks | int | 12 |
| pricePerBook | float | 350.50 |
| totalCost | double | 4206.00 |
| category | char | A |

The data types have different purposes:

- **int:** Stores whole numbers.
- **float:** Stores decimal numbers.
- **double:** Stores decimal numbers with greater precision.
- **char:** Stores a single character.

I also used format specifiers to display the values:

- `%d` for integers.
- `%f` for floating-point numbers.
- `%c` for characters.

The program produced the expected output.

**Screenshot:**

`05-exercise2-output.png` – Output showing the variables and their values.

## 8. Personalised Calculation

My assigned scenario involved calculating the distance travelled by a learner.

The given values were:

- Average speed = 192 km/h
- Time = 1.5 hours

The formula used was:

**Distance = Speed × Time**

Substituting the values:

Distance = 192 × 1.5

Distance = **288 km**

I used variables to store the average speed and time. I then used the multiplication operator `*` to calculate the distance.

The program displayed the final distance as 288 kilometres.

**Screenshot:**

`06-exercise3-output.png` – Output showing the calculated distance travelled.

## 9. Testing and Troubleshooting

I tested my C programs by compiling and running them to check whether they produced the expected results.

I also used an online C compiler to test my code and examine the output.

During the setup process, I discovered that the GCC command was not directly recognised by PowerShell. I located the GCC executable inside the Code::Blocks MinGW folder and successfully checked its version using its full path.

Testing the programs helped me identify errors and understand how to correct them.

## 10. GitHub Workflow

GitHub was used to manage and submit my laboratory work.

The steps involved were:

1. Forking the official laboratory repository to my GitHub account.
2. Cloning the repository to my computer.
3. Creating a feature branch for my laboratory work.
4. Adding and editing the C source files.
5. Saving changes using Git commits.
6. Pushing the feature branch to my GitHub account.
7. Creating a Pull Request to the original repository.

**GitHub details:**

- **GitHub Username:** akinyiochieng2006-bot
- **Fork Repository:** https://github.com/akinyiochieng2006-bot/kioto-ics2175-c-lab01
- **Feature Branch:** student/ENB211-0121/2025/lab01
- **Pull Request Link:** TO BE ADDED AFTER CREATING THE PULL REQUEST

**Screenshots:**

1. `07-github-fork.png` – Screenshot showing my GitHub fork.
2. `08-feature-branch.png` – Screenshot showing my feature branch.
3. `09-three-commits.png` – Screenshot showing at least three meaningful commits.
4. `10-pull-request.png` – Screenshot showing my Pull Request.

## 11. Screenshots

The following screenshots provide evidence of the work completed during this laboratory:

| No. | Screenshot filename | Description |
|---|---|---|
| 1 | 01-codeblocks-installation.png | Code::Blocks installation/About |
| 2 | 02-project-in-codeblocks.png | Project in Code::Blocks |
| 3 | 03-successful-build.png | Successful build |
| 4 | 04-exercise1-output.png | Exercise 1 output |
| 5 | 05-exercise2-output.png | Exercise 2 output |
| 6 | 06-exercise3-output.png | Exercise 3 output |
| 7 | 07-github-fork.png | GitHub fork |
| 8 | 08-feature-branch.png | Feature branch |
| 9 | 09-three-commits.png | Three meaningful commits |
| 10 | 10-pull-request.png | Pull Request |

All screenshots should be saved in the `report/SCREENSHOTS/` folder.

## 12. Individual Reflection

Through this laboratory, I learned how to write, compile and run basic C programs. I also gained knowledge of variables, data types and arithmetic operators.

I learned how to use an IDE and an online compiler to test my programs. Additionally, I gained experience using GitHub to manage programming projects.

One of the challenges was understanding the program structure and setting up the compiler correctly. However, practising and testing the programs helped me understand the concepts better.

In future, I will practise writing more C programs to improve my programming skills and become more confident in solving programming problems.

## 13. Conclusion

In conclusion, this laboratory introduced me to the basics of C programming. I learned how to write simple programs, use variables and data types, perform calculations and test program outputs.

I also gained practical experience with Code::Blocks, GCC and GitHub. The laboratory provided a good foundation for learning more advanced programming concepts.