# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Victor njogu
- **Registration Number:** ENB211-0018/2025[cite: 2, 4]
- **Programme:** B.Sc.in Agricultural and Biosystems Engineering
- **GitHub Username:** njoguvictor91-a11y
- **Assigned Scenario:** Campus stationery desk calculating the total cost of an order.
- **Variant ID:** ENB211-0018/2025
- **Date:** 17 November 2026

## 2. Objectives
The objective of this laboratory was to;
  set up a C programming and GitHub workflow environment,
  write and compile C programs using `printf()` and `scanf()`,
  select appropriate numeric and character data types with matching format specifiers, 
  track completed exercises using branches, commits, and a pull request.



## 3. Software and Hardware Environment

- **Operating System:** Windows 11 Pro
- **IDE:** Code::Blocks  25.03 with the MinGW GCC C compiler (`cb_console_runner.exe`).
- **Compiler:**  MinGW GCC 
- **Hardware:** HP EliteBOOK 840 G3, Intel(R) Core(TM) i5-6300U CPU @ 2.40GHz

## 4. Code::Blocks Installation and Configuration

Code::Blocks 25.03 was installed using the bundled MinGW installer (`codeblocks-25.03mingw-setup.exe`), which includes the GNU GCC compiler and GDB debugger. After installation, the toolchain was verified in Code::Blocks under **Settings → Compiler → Toolchain executables** to confirm that the installation directory pointed to the bundled `MinGW` folder and that `gcc.exe` was detected as the C compiler. A test console application (`Kioto_C_Lab01`) was then created to confirm clean compilation and terminal execution via `cb_console_runner.exe`.
![alt text](<screenshots/kioto 1.png>)

## 5. Hello Kioto Implementation

In Exercise 1 (`src/exercise01_hello_kioto.c`), the program includes the standard input/output header (`<stdio.h>`) and uses two `printf()` statements inside `main()` to print the required greeting (`Hello, Kioto!`) followed by an introductory line stating my degree programme and unit code (`B.Sc. in Agricultural and Biosystems Engineering (ICS 2175)`), before returning `0`.

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying B.Sc. in Agricultural and Biosystems Engineering (ICS 2175).\n");

    return 0;
}
Console Output:

Hello, Kioto!
I am studying B.Sc. in Agricultural and Biosystems Engineering (ICS 2175).
screenshots/kioto 2.png

## 6. Explanation of C Program Structure

#include <stdio.h>: A preprocessor directive that imports the Standard Input/Output header file, giving the program access to functions such as printf() and scanf().

int main(void): The mandatory entry-point function where C program execution begins; int specifies that it returns an integer exit status to the operating system, and void indicates it takes no arguments.

{ ... } (Braces): Curly braces define the start and end of a code block, grouping all statements belonging to main().

Statements (printf(...);, assignments): Individual instructions executed sequentially from top to bottom, each terminated by a semicolon (;).

return 0;: Terminates the main() function and returns 0 to signal to the operating system that the program completed without errors.

## 7. Variables and Data Types

In Exercise 2 (src/exercise02_variables.c), four variables were declared and initialised across four distinct C data types:

int numberOfNotebooks = 4; — Declared as int because item quantities are whole numbers without decimal places. Displayed using %d (signed decimal integer).

float pricePerNotebook = 125.50f; — Declared as float to store decimal currency values using single-precision floating point. Displayed using %.2f to format output to two decimal places.

double orderTotal = numberOfNotebooks * pricePerNotebook; — Declared as double to hold calculated monetary totals with double-precision floating-point accuracy. Displayed using %.2lf.

char itemCategory = 'S'; — Declared as char to store a single ASCII category character ('S' for Stationery) using 1 byte of memory. Displayed using %c.

## 8. Personalised Calculation

Variant ID: ENB211-0018/2025Assigned Scenario: A campus stationery desk calculates the total cost of an order.Input Values & Formula:numberOfNotebooks = 4pricePerNotebook = 125.5Operation: $\text{Quantity} \times \text{Unit Price}$Output label: Order total
Result & Independent Verification: Multiplying $4 \times 125.5$ yields $502.00$ ($(4 \times 125) + (4 \times 0.5) = 500 + 2 = 502.00$), matching the program's displayed output (Order total: 502.00).
#include <stdio.h>

int main(void)
{
    int numberOfNotebooks = 4;
    double pricePerNotebook = 125.5;
    double orderTotal;

    orderTotal = numberOfNotebooks * pricePerNotebook;

    printf("Number of notebooks: %d\n", numberOfNotebooks);
    printf("Price per notebook: %.2f\n", pricePerNotebook);
    printf("Operation: %d x %.2f\n", numberOfNotebooks, pricePerNotebook);
    printf("Order total: %.2f\n", orderTotal);

    return 0;
}

## 9. Testing and Troubleshooting

File Extension Compilation Error: Initially, saving a new source file in Code::Blocks without explicitly typing .c caused the IDE to save it as a C++ file (.cpp), resulting in a compiler error on int main(). Renaming and saving files explicitly with the .c extension resolved the issue.

Project vs. Repository File Execution: Having the standalone Kioto_C_Lab01 project open while editing files in src/ caused Build and Run to execute the project's main.c instead of the active exercise file. Compiling the individual src/ files directly ensured the intended code was tested.

Interactive scanf() Input & Background Console Lock: After extending the calculation with scanf() and changing numberOfNotebooks from 4 to 6 (verifying Order total updated from 502.00 to 753.00), the Build and Run buttons in Code::Blocks became disabled while Abort stayed active. Checking the Build log showed cb_console_runner.exe was still open in the background waiting for keyboard input. Entering the inputs in the console window and closing it restored the build controls.

## 10. GitHub Workflow

Repository URL: https://github.com/njoguvictor91-a11y/kioto-ics2175-c-lab01

Working Branch: student/ENB211-0018-2025/lab01

Commit History:

Complete hello world exercise (src/exercise01_hello_kioto.c)

Implement variables and data types (src/exercise02_variables.c)

Complete personalised calculation and report (src/exercise03_personalised_calculation.c and report/REPORT_TEMPLATE.md)

Pull Request URL: (https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/10)

The repository was forked to njoguvictor91-a11y, cloned locally via GitHub Desktop, and branched into student/ENB211-0018-2025/lab01. Each exercise was staged and committed separately with clear commit messages before pushing the branch to origin and opening a pull request for automated test verification.

## 11. Screenshots

**Figure 1: Code::Blocks IDE Project Workspace (`Kioto_C_Lab01`)**  
  ![Code::Blocks IDE Project Workspace](screenshots/kioto%201.png)  
  *Caption: Initial setup of the `Kioto_C_Lab01` console project workspace in Code::Blocks 25.03[cite: 8].*screenshots/kioto 1.png

- **Figure 2: Exercise 1 Console Output (`Hello, kioto!`)**  
  ![Exercise 1 Console Output](screenshots/kioto%202.png)  
  *Caption: Successful compilation and console execution displaying the greeting and introductory line (`Process returned 0`)[cite: 9].*screenshots/kioto 2.png

- **Figure 3: Syntax Error Troubleshooting (`error: expected ';' before 'return'`)**  
  ![Syntax Error in Build Messages](screenshots/kioto%203.png)  
  *Caption: Compiler build message identifying a missing semicolon on line 7 during Exercise 1 testing[cite: 10].*screenshots/kioto 3.png

- **Figure 4: Console Output Missing Newline (`\n`) Escape Sequence**  
  ![Console Output Without Newline](screenshots/kioto%204.png)  
  *Caption: Testing output formatting before adding `\n` between the first and second `printf()` statements[cite: 11].*screenshots/kioto 4.png

- **Figure 5: Extended Exercise 1 Output with Programme Details**  
  ![Extended Exercise 1 Console Output](screenshots/kioto%205.png)  
  *Caption: Console output after adding `\n` and a third line introducing the B.Sc. in Agricultural and Biosystems Engineering programme[cite: 12].*screenshots/kioto 5.png

- **Figure 6: Extended Exercise 1 Source Code in Code::Blocks**  
  ![Extended Exercise 1 Source Code](screenshots/kioto%206.png)  
  *Caption: Source code and build log for the multi-line greeting implementation in Code::Blocks[cite: 13].*screenshots/kioto 6.png

- **Figure 7: Personalised Stationery Calculation Source Code (Part 1)**  
  ![Personalised Calculation Code Top](screenshots/kioto%207.png)  
  *Caption: Variable declarations (`int` and `double`), value assignments (`4` and `125.5`), and multiplication operation in `main.c`[cite: 14].*screenshots/kioto 7.png

- **Figure 8: Personalised Stationery Calculation Source Code (Part 2)**  
  ![Personalised Calculation Code Bottom](screenshots/kioto%208.png)  
  *Caption: Formatted `printf()` output statements using `%d` and `%.2f` specifiers to display the inputs, operation, and `Order total`[cite: 15].*screenshots/kioto 8.png

- **Figure 9: Personalised Calculation Console Output (`Order total: 502.00`)**  
  ![Personalised Calculation Console Output](screenshots/kioto%209.png)  
  *Caption: Verified console output displaying `Number of notebooks: 4`, `Price per notebook: 125.50`, and `Order total: 502.00`[cite: 16].*screenshots/kioto 9.png

- **Figure 10: GitHub Desktop Working Branch & Staged Changes (`student/ENB211-0018-2025/lab01`)**  
  ![GitHub Desktop Branch and Changes](screenshots/kioto%2016.png)  
  *Caption: GitHub Desktop showing branch `student/ENB211-0018/2025/lab01` (PR #10), saved screenshots in `report/screenshots/`, and completed `src/exercise03_personalised_calculation.c`[cite: 7].*screenshots/kioto 10.png

  - **Figure 10: Extended Calculation Source Code with `char` Category and Summary Sentence**  
  ![Extended Calculation Source Code](screenshots/kioto%2011.png)  
  *Caption: Extended stationery order program in Code::Blocks adding `itemCategory` (`char`), formatted output specifiers, and a full summary sentence (`0 error(s), 0 warning(s)`)[cite: 17].*

- **Figure 11: Extended Calculation Output Verifying Updated Input (`numberOfNotebooks = 6`)**  
  ![Extended Calculation Console Output](screenshots/kioto%2012.png)  
  *Caption: Console output confirming that updating `numberOfNotebooks` from `4` to `6` dynamically recalculates `Order total` to `753.00`[cite: 18].*screenshots/kioto 11.png

- **Figure 12: Interactive `scanf()` User Input Implementation (Part 1)**  
  ![Interactive Input Code Top](screenshots/kioto%2013.png)  
  *Caption: Variable declarations (`int`, `float`, `char`) and `scanf()` statements using the `&` address-of operator to read user inputs[cite: 19].*screenshots/kioto 12.png

- **Figure 13: Interactive `scanf()` Calculation and Order Receipt Output (Part 2)**  
  ![Interactive Input Code Bottom](screenshots/kioto%2014.png)  
  *Caption: Multiplication calculation and formatted `Order Receipt` output statements in Code::Blocks[cite: 20].*screenshots/kioto 13.png

- **Figure 14: Interactive `scanf()` Console Execution and Order Receipt**  
  ![Interactive Input Console Output](screenshots/kioto%2015.png)  
  *Caption: Live console test reading category `'1'`, quantity `4`, and unit price `25` via `scanf()` and displaying `Order total: 100.00`[cite: 21].*screenshots/kioto 14.png

- **Figure 15: GitHub Desktop Working Branch & Staged Changes (`student/ENB211-0018-2025/lab01`)**  
  ![GitHub Desktop Branch and Changes](screenshots/kioto%2016.png)  
  *Caption: GitHub Desktop showing branch `student/ENB211-0018/2025/lab01` (PR #10), saved screenshots in `report/screenshots/`, and completed `src/exercise03_personalised_calculation.c`.*screenshots/kioto 16.png

## 12. Individual Reflection

What I learned: I learned how C programs are structured, how data types (int, float, double, char) map to specific printf()/scanf() format specifiers, how the & address-of operator passes memory locations to scanf(), and how to isolate coursework on a dedicated Git branch using atomic commits.

What I found difficult: Managing separate Code::Blocks project files alongside the GitHub repository's src/ folder caused initial build confusion, and noticing that cb_console_runner.exe was waiting for scanf() input in a background window took troubleshooting.

What I would do differently next time: I will create my working branch before editing any files, open the repository root folder directly at the start of the lab, and close terminal windows immediately after verifying console outputs.

## 13. Conclusion

All objectives of Laboratory 01 were successfully achieved. The Code::Blocks and MinGW GCC toolchain was configured, all three C exercises compiled cleanly and produced verified outputs (Order total: 502.00 for 4 × 125.5), and the source files and technical report were committed and pushed to branch student/ENB211-0018-2025/lab01.