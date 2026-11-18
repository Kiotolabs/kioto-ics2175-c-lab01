# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** BENEDICT MBATI
- **Registration Number:** ENB211-0056/2025
- **Programme:** BSC ABE
- **GitHub Username:*@nyamanyabenedict
- **Assigned Scenario:** CALCULATION OF PLOT AREA
- **Variant ID:ENB211-0056/2025
- **Date:** 18/11/2025

## 2. Objectives

Explain the roles of source code, a compiler, an executable program and an IDE.
Install and configure Code::Blocks with a working C compiler on Windows.
Create, save, compile, run and troubleshoot a basic C program.
Declare variables, select appropriate data types, assign values and display formatted output.
Use Git and GitHub to version, publish and submit your practical work.
Explain your own program and provide evidence of the process you followed.

## 3. Software and Hardware Environment

- **Operating System:** Windows10
- **IDE:** Code::Blocks version 25.03
- **Compiler:** GNU GCC Compiler
- **Hardware:** HP PROBOOK

## 4. Code::Blocks Installation and Configuration

By searching it in chrome and installing it

## 5. Hello Kioto Implementation

The Exercise 1 program serves as the foundational introduction to the C programming language, demonstrating how to include standard libraries, write the main execution function, output text to the console, and properly terminate a program.

## 6. Explanation of C Program Structure

#include: A preprocessor command. It loads external library files into your program before compilation. For example, #include <stdio.h> unlocks functions like printf().

main(): The entry point of every C program. Execution always starts here. int means it returns an integer, and void means it takes no inputs.

Braces ({ and }): Curly brackets that group code into a block. { marks the start of a function or loop, and } marks the end.

Statements: Individual commands that tell the computer to perform an action. Every statement in C must end with a semicolon (;).

return 0;: Exits the main() function. It tells the operating system that the program finished successfully with no errors.

## 7. Variables and Data Types

    ### 1. Integer Variable (`int`)

    * **Variable:** `numberOfBooks = 12`
    * **Purpose:** Stores whole numbers without decimals.
    * **Format Specifier:** `%d` tells `printf()` to output a signed decimal integer.

    ### 2. Float Variable (`float`)

    * **Variable:** `pricePerBook = 350.50f`
    * **Purpose:** Stores single-precision floating-point numbers (numbers with fractional parts).
    * **Format Specifier:** `%.2f` displays the float value rounded to two decimal places.

    ### 3. Character Variable (`char`)

    * **Variable:** `category = 'A'`
    * **Purpose:** Stores a single character enclosed in single quotes.
    * **Format Specifier:** `%c` outputs the single character.

    ### 4. Double Variable (`double`)

    * **Variable:** `discounted_price = 340.94`
    * **Purpose:** Stores double-precision floating-point numbers with greater precision and a larger range than `float`.
    * **Format Specifier:** `%.2lf` displays the double value rounded to two decimal places.

---
## 8. Personalised Calculation

### Explanation of Exercise 3: Personalised Calculation

This exercise demonstrates how to declare input variables, perform basic arithmetic operations, store the computed outcome, and format the output using variables in C.

---

### Scenario and Variant Details

* **Variant ID:** ENB211-0042/2025
* **Scenario:** Calculating the floor area of a rectangular computer laboratory for equipment placement.
* **Input Values:**
* `length = 24` (meters)
* `width = 13` (meters)



---

### Arithmetic Operation

The program multiplies the length by the width to compute the total area of the rectangle:


    Area = length * width

Area = 24 * 13 = 312

---

### Result and Output

The program stores the computed product in an integer variable named `area` and uses `printf` to display the formatted inputs along with the final calculated result:

* **Length (m):** `24`
* **Width (m):** `13`
* **Area:** `312`

## 9. Testing and Troubleshooting

### Compilation and Testing Process

Compiling and testing the laboratory programs involved a structured workflow within the Code::Blocks IDE, ensuring that the source code translated correctly into executable machine code via the GCC compiler and produced the expected console output.

---

### 1. Compilation Process

* **Triggering the Build:** For each program (Exercise 1, Exercise 2, and Exercise 3), compilation was initiated by pressing **`Ctrl + F9`** (or selecting **Build > Build** from the top menu).
* **Compiler Action:** Code::Blocks invoked the bundled **GNU GCC Compiler** to parse the `.c` source files, check for syntax correctness, and link standard libraries like `<stdio.h>`.
* **Build Log Verification:** The build messages window at the bottom of the IDE was monitored to confirm zero errors and zero warnings before execution.

---

### 2. Testing Process

* **Execution:** Once successfully compiled, each program was run by pressing **`Ctrl + F10`** (or clicking the green **Build and Run** button).
* **Output Validation:**
* **Exercise 1:** Verified that the console sequentially displayed both message lines without string collision, confirming that the `\n` newline escape sequences worked properly.
* **Exercise 2:** Checked that each data type (`int`, `float`, `char`, `double`) printed correctly with its assigned value, and that precision specifiers like `%.2f` and `%.2lf` formatted the floating-point numbers to two decimal places.
* **Exercise 3:** Confirmed that the arithmetic calculation (24 * 13) evaluated correctly to `312` and displayed alongside the input labels.



---

### 3. Errors Fixed During Development

While developing and testing these programs, a few common syntax and formatting issues were encountered and resolved:

* **Missing Semicolon (`;`):**
* *Error:* Forgetting a semicolon at the end of a `printf` statement resulted in a compilation error (`error: expected ';' before 'return'`).
* *Fix:* Added the missing semicolon to properly terminate the C statement.


* **Format Specifier Mismatch:**
* *Error:* Initially, using an incorrect format specifier or mismatched precision flags (such as passing a `double` variable without the `l` modifier or omitting precision bounds) caused compilation warnings or unexpected output values.
* *Fix:* Ensured precise alignment between the variable type and its specifier (e.g., `%d` for `int`, `%.2f` for `float`, `%c` for `char`, and `%.2lf` for `double`).


* **Undeclared Function Warning:**
* *Error:* Early test runs without `#include <stdio.h>` triggered a compiler warning regarding an implicit declaration of the built-in function `printf`.
* *Fix:* Placed `#include <stdio.h>` at the top of the file to supply the necessary function declarations.

## 10. GitHub Workflow

TODO: Describe your fork, branch, commits and pull request (include screenshots/links).

## 11. Screenshots


![Git pull](screenshot_git_pull.png)

![Git fork](screenshot_git_fork.png)

![Git commit](screenshot_git_commit.png)

![Exercise 3 console](screenshot_exercise03_console.png)

![Exercise 3 code](screenshot_exercise03_code.png)

![Exercise 2 code](screenshot_exercise02_code.png)

![Exercise 1 error](screenshot_exercise01_error.png)

![Exercise 1 console](screenshot_exercise01_console.png)

![Exercise 1 code](screenshot_exercise01_code.png)

![Exercise 2 console](screenshot_excercise_02_console.png)

![About dialogue box](screenshot_codeblocks_about_dialogue.png)

![Codeblocks Part One](screenshot_codeblocks.png)



## 12.coding as a programming language

TODO: What did you learn? What was difficult? What will you do differently next time?
I I learnt that c programming teaches on how to give instuctions to computers to perform specific tasks
difficulties include:pointers,loops,functions,etc
## 13. c-programming mainly relies on following instructions
#include
main()
printf()
scanf()
int
float
char
double
return
e.t.c
TODO: Summarise the laboratory.
