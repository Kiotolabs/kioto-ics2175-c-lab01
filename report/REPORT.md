# ICS 2175 – LABORATORY 01 REPORT

## 1. Cover Information

- **Student Full Name:** Abednego Nayiya Jimba
- **Registration Number:** ENB211-0046/2025
- **Programme:** Agricultural and Biosystems Engineering
- **GitHub Username:** abednego19
- **Assigned Scenario:** Printing Costs
- **Variant ID:** V11
- **Date:** 16/11/2026

## 2. Objectives

- To set up a C programming environment on Windows using Code::Blocks and the GCC compiler.
- To write, compile and run basic C programs using `printf()` and standard format specifiers.
- To understand basic C programming concepts, including variables, data types and arithmetic operations.
- To use Git, GitHub Desktop and GitHub to fork a repository, manage branches, commit changes and submit a Pull Request.

## 3. Software and Hardware Environment

- **Operating System:** Windows 10
- **IDE:** Code::Blocks 25.03
- **Compiler:** GNU GCC Compiler (MinGW)
- **Hardware:** Evolve III Masterpiece laptop, 4 GB RAM

## 4. Code::Blocks Installation and Configuration

I downloaded the Code::Blocks installer bundled with the MinGW GCC compiler for Windows. I ran the setup wizard using the default installation settings so that both the Code::Blocks IDE and the GNU GCC compiler were installed together.

After installation, I opened Code::Blocks and navigated to Settings, then Compiler. I confirmed that the GNU GCC Compiler was detected and selected as the default compiler under the Toolchain Executables tab. This ensured that the IDE was properly configured to compile and run C programs.

The GCC compiler was installed in the following directory:

`C:\Program Files\CodeBlocks\MinGW\bin`

## 5. Hello Kioto Implementation

In Exercise 1 (`src/exercise01_hello_kioto.c`), I used the `printf()` function to display the greeting "Hello, Kioto!" on the first line. I also introduced my programme by displaying the statement "I am studying Agricultural and Biosystems Engineering."

The program used the following code:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying Agricultural and Biosystems Engineering.\n");

    return 0;
}
```

The `\n` escape sequence was used to move the output to a new line.

## 6. Explanation of C Program Structure

- **`#include <stdio.h>`:** This is a preprocessor directive that includes the Standard Input/Output library, which provides functions such as `printf()`.
- **`main()`:** This is the main function and the entry point where program execution begins.
- **Braces `{ }`:** These enclose the block of code belonging to the main function.
- **Statements:** These are individual instructions inside the main function. Each statement normally ends with a semicolon (`;`).
- **`printf()`:** This function displays text and other output on the console.
- **`return 0;`:** This ends the main function and indicates that the program executed successfully.

## 7. Variables and Data Types

In Exercise 2 (`src/exercise02_variables.c`), I declared four variables using different C data types:

- **`int studentAge = 20;`** – Stores a whole number and is printed using the `%d` format specifier.
- **`float bodyTemperature = 98.6f;`** – Stores a single-precision decimal number and is printed using the `%.2f` format specifier.
- **`double campusDistance = 100.50;`** – Stores a double-precision decimal number and is printed using the `%.2f` format specifier.
- **`char gradeCode = 'A';`** – Stores a single character and is printed using the `%c` format specifier.

This exercise helped me understand how different data types are declared and used in C programming.

## 8. Personalised Calculation

- **Variant ID:** V11
- **Registration Number:** ENB211-0046/2025
- **Scenario:** Printing Costs
- **Input Value 1:** 75
- **Input Value 2:** 5
- **Operation:** Multiplication
- **Required Output Label:** Printing cost

In Exercise 3 (`src/exercise03_personalised_calculation.c`), I implemented my assigned personalised calculation based on the printing costs scenario.

I declared two integer variables: `pagesPrinted = 75` and `costPerPage = 5`. I then multiplied the two values and stored the result in a variable named `printingCost`.

The calculation was performed as follows:

**Printing Cost = Number of Pages × Cost Per Page**

**Printing Cost = 75 × 5 = 375**

The C program was implemented as follows:

```c
#include <stdio.h>

int main(void)
{
    // Declare input variables
    int pagesPrinted = 75;
    int costPerPage = 5;

    // Declare result variable
    int printingCost;

    // Perform multiplication
    printingCost = pagesPrinted * costPerPage;

    // Display the result
    printf("Printing cost: %d\n", printingCost);

    return 0;
}
```

**Expected Output:**

```text
Printing cost: 375
```

The program successfully multiplied the number of pages by the cost per page and displayed the total printing cost using the required output label.

## 9. Testing and Troubleshooting

I compiled each C source file in Code::Blocks using the GCC compiler through the Build menu by selecting Build or Compile Current File. I also ran the programs and checked their console outputs to confirm that they produced the expected results.

During testing, I corrected a spelling error in the `printf()` function in Exercise 1. In Exercise 2, I restored a missing closing comment delimiter (`*/`) that had caused a compilation error. I also checked the variable declarations and statements to ensure that the programs followed the correct C syntax.

For Exercise 3, I additionally tested the program directly through Windows Command Prompt using the GCC compiler. Initially, the command `gcc` was not recognised because the GCC installation directory had not been added to the Windows PATH environment variable.

I resolved this by locating the GCC executable in the Code::Blocks installation directory and using its full path to compile the program.

The compilation command was:

```cmd
"C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" .\src\exercise03_personalised_calculation.c -o exercise03.exe
```

I then executed the compiled program using:

```cmd
.\exercise03.exe
```

The program produced the following output:

```text
Printing cost: 375
```

This confirmed that the program compiled and executed successfully. The successful execution also demonstrated that the personalised calculation produced the expected result.

## 10. GitHub Workflow

- **GitHub Username:** abednego19
- **Repository:** Kiotolabs/kioto-ics2175-c-lab01
- **Branch:** `student/ENB211-0046/2025/lab01`
- **Commits:** I created separate commits for Exercise 1, Exercise 2, Exercise 3 and the completed laboratory report.

I used GitHub Desktop to manage my local repository, create and switch to my feature branch, commit changes and push the branch to GitHub.

After pushing my changes, I opened a Pull Request from my feature branch to the `main` branch of the original repository, `Kiotolabs/kioto-ics2175-c-lab01`.

## 11. Screenshots

The following screenshots are stored in the `report/screenshots/` directory. They provide evidence of the programming environment, implementation of the exercises, testing and GitHub workflow.

**Code::Blocks and project setup**

1. `01_codeblocks_about.png`
2. `project-setup.png`
3. `03_build_log.png`

**Programming exercises and output**

4. `04_exerciese01_output.png`
5. `exercise01-hello-kioto.png`
6. `05_exercise02_output.png`
7. `exercise02-variables.png`
8. `exercise03-output.png`
9. `exercise03-personalised-calculation.png`

**GitHub workflow and version control**

10. `07_github_fork.png`
11. `08_feature_branch.png`
12. `comit01.png`
13. `comit2.png`
14. `comit03.png`
15. `10_pull_request.png`

These screenshots document the progress and completion of the laboratory activities.

## 12. Individual Reflection

**What I learned:**

I learned how to structure a C program, declare and initialise variables using different data types such as `int`, `float`, `double` and `char`, and format output using the `printf()` function. I also gained practical experience in version control using Git and GitHub Desktop, including creating branches, making commits and submitting Pull Requests.

I also learned how to compile and execute a C program directly from Windows Command Prompt using the GCC compiler.

**What was difficult:**

I experienced some challenges when debugging compiler errors caused by small syntax mistakes, such as misspelling the `printf()` function and accidentally deleting a closing comment delimiter (`*/`). I also found setting up GitHub Desktop and understanding the branching and Pull Request workflow challenging at first.

Another challenge was running GCC directly from Command Prompt because Windows initially did not recognise the `gcc` command. I overcame this by locating the GCC executable and using its full installation path.

**What I will do differently next time:**

Next time, I will carefully check my spelling, syntax and matching comment delimiters before compiling my programs. I will also commit each exercise incrementally after confirming that it compiles successfully. Additionally, I will manage my time better to ensure that I complete all laboratory tasks within the allocated three hours.

## 13. Conclusion

In this laboratory, I successfully configured Code::Blocks with the GNU GCC compiler, implemented and tested three C programming exercises covering output formatting, variables, data types and arithmetic calculations.

I also completed my personalised calculation for Variant V11, which involved determining the printing cost by multiplying 75 pages by a cost of 5 per page, giving a total printing cost of 375. I successfully compiled and executed the program using both Code::Blocks and Windows Command Prompt.

Furthermore, I gained practical experience using Git and GitHub Desktop to manage source code, create branches, commit changes and submit a Pull Request.

Overall, the laboratory improved my understanding of basic C programming concepts and introduced me to essential software development, debugging and version control practices.