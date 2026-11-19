# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Patricia Ndirangu
- **Registration Number:** enb211-0045/2025
- **Programme:**    C
- **GitHub Username:** ndirangupatricia6-tech
- **Assigned Scenario:** Printing Costs
- **Variant ID:** V11
- **Date of Submission:** 18 November 2026
- **Course:** ICS 2175 – Introduction to Computer Programming
- **Laboratory:** Laboratory 01 – Introduction to C Programming


## 2. Objectives of the Laboratory

The objectives of this laboratory were:

1. To become familiar with the C programming language and its basic syntax.
2. To install and configure a C programming environment using Code::Blocks.
3. To write, compile, and execute simple C programs.
4. To understand the structure of a C program, including the `main()` function and header files.
5. To learn how to declare, initialise, and use variables of different data types.
6. To perform basic arithmetic operations using C.
7. To practise using Git and GitHub for version control and submission of programming assignments.



## 3. Software and Hardware Requirements

### 3.1 Software Requirements

The following software tools were used during the laboratory:

| Software | Purpose |
|---|---|
| Windows Operating System | Operating environment |
| Code::Blocks IDE | Writing, compiling, and executing C programs |
| GCC Compiler | Compiling C source code |
| Git | Version control and tracking changes |
| GitHub | Hosting the repository and submitting the laboratory work |
| PowerShell | Executing Git commands |
| Programiz | Online C compiler used for writing, compiling, and testing C programs |
### 3.2 Hardware Requirements

The laboratory was performed using a personal computer with the following hardware:

- Desktop or laptop computer
- Keyboard and mouse
- Monitor/display
- Internet connection


## 4. Installation and Configuration of the Programming Environment

### 4.1 Installation of Code::Blocks

Code::Blocks was used as the Integrated Development Environment (IDE) for writing, compiling, and executing C programs.

The installation process involved the following steps:

1. Downloaded the Code::Blocks installer.
2. Ran the installation wizard.
3. Followed the installation instructions and accepted the default settings.
4. Completed the installation process.
5. Launched Code::Blocks.
6. Confirmed that the programming environment was ready for use.

### 4.2 Configuration of the Compiler

The GNU GCC compiler was used to compile the C programs.

Code::Blocks was configured to use the GCC compiler, allowing the written source code to be translated into executable programs.

### 4.3 Creating a C Programming Project

A C programming project was created in Code::Blocks.

The source files were written, saved with the `.c` extension, compiled, and executed to verify that they produced the expected output.



## 5. Exercise 1 – Hello Kioto

### 5.1 Aim

The aim of this exercise was to write, compile, and execute a simple C program that displays a greeting message on the screen.

### 5.2 Source Code

The program used the `stdio.h` header file to access the `printf()` function. The `main()` function served as the entry point of the program.

The program displayed "Hello, Kioto!" followed by a message introducing the course.

### 5.3 Program Output

The program produced the following output:

```text
Hello, Kioto!
I am learning C programming in ICS 2175.
```

### 5.4 Explanation

- `#include <stdio.h>` provides access to standard input and output functions.
- `int main(void)` defines the main function where program execution begins.
- `printf()` displays text on the screen.
- `\n` moves the cursor to the next line.
- `return 0;` indicates that the program executed successfully.

The program compiled and executed successfully, displaying the expected greeting messages.


## 6. Structure of a C Program

A C program consists of several components that work together to execute instructions. During this laboratory, the following basic structure was used:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");

    return 0;
}
```

### Explanation of the Components

| Component | Description |
|---|---|
| `#include <stdio.h>` | Includes the standard input/output header file, which provides functions such as `printf()`. |
| `int main(void)` | Defines the main function where program execution begins. |
| `{ }` | Curly braces define the body of the function. |
| `printf()` | Displays messages or values on the screen. |
| `;` | Marks the end of a statement in C. |
| `return 0;` | Indicates successful program termination. |

The laboratory helped me understand how these components are combined to create, compile, and execute a basic C program.


## 7. Exercise 2 – Variables and Data Types

### 7.1 Aim

The aim of this exercise was to learn how to declare, initialise, and display variables using different data types in the C programming language.

### 7.2 Data Types Used

Four basic data types were used in the program:

| Data Type | Variable Name | Value | Description |
|---|---|---|---|
| `int` | `age` | 20 | Stores an integer value. |
| `float` | `height` | 1.65 | Stores a decimal number. |
| `double` | `weight` | 55.75 | Stores a decimal number with greater precision. |
| `char` | `grade` | A | Stores a single character. |

### 7.3 Source Code

The program declared and initialised variables, then used the `printf()` function to display their values.

The format specifiers used were:

- `%d` for integer values.
- `%f` for floating-point values.
- `%c` for character values.

### 7.4 Program Output

The program produced the following output:

```text
Age: 20
Height: 1.65 metres
Weight: 55.75 kg
Grade: A
```

### 7.5 Explanation

The exercise demonstrated that different data types are used to store different kinds of information.

The `int` data type was used for whole numbers, `float` and `double` were used for decimal values, and `char` was used to store a single character.

The program compiled and executed successfully, displaying all the variable values correctly.



## 8. Exercise 3 – Personalised Calculation

### 8.1 Aim

The aim of this exercise was to apply arithmetic operations in C by developing a personalised calculation program based on the assigned variant.

### 8.2 Assigned Variant Details

- **Variant ID:** V11
- **Scenario:** Printing Costs
- **Number of Copies:** 75
- **Cost per Copy:** KSh 5
- **Required Operation:** Multiplication
- **Required Output Label:** Printing cost

### 8.3 Calculation

The printing cost was calculated by multiplying the number of copies by the cost per copy.

Formula:

```text
Printing Cost = Number of Copies × Cost per Copy
```

Substitution:

```text
Printing Cost = 75 × 5
Printing Cost = KSh 375
```

### 8.4 Program Output

The program produced the following output when executed:

```text
Number of copies: 75
Cost per copy: 5
Operation: Multiplication
Printing cost: 375
```

### 8.5 Explanation

The program declared two integer variables:

- `numberOfCopies` was initialised to 75.
- `costPerCopy` was initialised to 5.

A result variable named `printingCost` stored the multiplication result.

The multiplication operator (`*`) was used to calculate the total printing cost. The `printf()` function displayed the input values, operation, and final result.

The program executed successfully and produced the expected printing cost of KSh 375.


## 9. Testing and Troubleshooting

### 9.1 Program Testing

The three C programs were tested by compiling and executing them to check whether they produced the expected results.

| Exercise | Test Performed | Expected Result | Outcome |
|---|---|---|---|
| Exercise 1 | Run the Hello Kioto program. | Display the greeting and course introduction. | Successful |
| Exercise 2 | Run the variables program. | Display the values of the four variables. | Successful |
| Exercise 3 | Run the personalised calculation program. | Display a printing cost of 375. | Successful |

### 9.2 Errors Encountered

During testing, I experimented with changing statements in the C program to understand how syntax affects program execution.

For example, removing a semicolon caused a compilation error because C statements require appropriate termination.

I also tested removing the newline character (`\n`) from a `printf()` statement. This caused the output messages to appear on the same line.

### 9.3 Troubleshooting

The errors were corrected by:

1. Restoring the missing semicolon.
2. Adding the newline character (`\n`) to separate output messages.
3. Recompiling the program.



## 10. Git and GitHub Workflow

### 10.1 Repository Setup

A fork of the laboratory repository was created on GitHub under my account.

The repository was cloned to my local computer so that I could work on the C programming exercises.

### 10.2 Branch Creation

I used the following student branch to organise my laboratory work:

```text
student/enb211-0045/2025/lab01
```

Working on a separate branch helped keep my laboratory changes organised.

### 10.3 Adding and Committing Changes

Git was used to track changes made to the laboratory source files.

The following commands were used during the workflow:

```powershell
git status
git add <filename>
git commit -m "Commit message"
```

Separate commits were made for the programming exercises to maintain a clear history of the work.

### 10.4 Pushing Changes to GitHub

After committing the changes locally, I pushed my student branch to GitHub using:

```powershell
git push origin student/enb211-0045/2025/lab01
```

This uploaded my committed changes to my GitHub repository.

### 10.5 Importance of Version Control

Using Git and GitHub helped me to:

1. Track changes made to my source code.
2. Maintain a history of my programming work.
3. Organise exercises using a dedicated branch.
4. Back up my work on GitHub.
5. Prepare my work for submission and review.



## 11. Screenshots and Evidence

Screenshots were captured during the laboratory to provide evidence of the development, compilation, execution, and version-control activities completed.

The following screenshots are included in the `report/screenshots/` directory:

| No. | Screenshot | Description |
|---|---|---|
| 1 | `codeblocks -project-setup.png` | Code::Blocks project setup evidence. |
| 2 | `codeblocks-aboutlog.png` | Code::Blocks About window showing IDE information. |
| 3 | `exercise01_hello_kioto.png` | Exercise 1 source code. |
| 4 | `exercise1-output.png` | Exercise 1 program output. |
| 5 | `exercise02_variables.png` | Exercise 2 source code. |
| 6 | `exercise2-output.png` | Exercise 2 program output. |
| 7 | `exercise03_personalised_calculation.png` | Exercise 3 source code for the V11 Printing Costs scenario. |
| 8 | `exercise03_output.png` | Exercise 3 program output. |
| 9 | `successful-build-log.png` | Evidence of successful compilation or build. |
| 10 | `fork.png` | Evidence of the GitHub repository fork. |

These screenshots provide evidence of the laboratory activities completed. Additional GitHub screenshots, such as the student branch, commit history, and Pull Request, should be included if those activities were completed.


## 12. Reflection and Lessons Learnt

This laboratory provided practical experience in writing, compiling, and executing programs using the C programming language.

Through the exercises, I learned how to:

1. Write a basic C program using the correct program structure.
2. Use the `printf()` function to display messages and values.
3. Declare and initialise variables using `int`, `float`, `double`, and `char`.
4. Use appropriate format specifiers when displaying variable values.
5. Perform arithmetic calculations using the multiplication operator.
6. Identify and correct simple syntax errors, such as missing semicolons.
7. Understand how newline characters affect program output.
8. Use Git and GitHub to track and manage programming work.

One of the important lessons I learned was that small syntax errors can prevent a C program from compiling correctly. Testing and debugging helped me identify and correct these errors.

I also gained experience using version control to organise my work and maintain a record of changes.

Overall, the laboratory improved my confidence in writing and understanding basic C programs.


## 13. Conclusion

The ICS 2175 Laboratory 01 provided a practical introduction to the C programming language and its basic concepts.

I successfully worked through the three exercises, which involved displaying messages, declaring and using different data types, and performing a personalised arithmetic calculation based on Variant V11 (Printing Costs).

The laboratory also introduced me to compiling and executing C programs, identifying syntax errors, and using Git and GitHub for version control.

Through these activities, I gained a better understanding of basic C programming concepts and developed practical skills that will help me in future programming exercises.

The laboratory objectives were achieved through the completion and testing of the assigned exercises.

