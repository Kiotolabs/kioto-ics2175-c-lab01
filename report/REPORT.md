ICS 2175 – Laboratory 01 Report
1. Cover Information
Student Full Name: HAGREAVES ODHIAMBO
Registration Number: ENB211-0061/2025
Programme: Bsc. Agricultural and Biosystems Engineering
GitHub Username: hagreaves-odhiambo
Assigned Scenario: Total computer workstations
Variant ID: V14
Date: 17th November 2026
2. Objectives
The objective of this lab was to set up a working C programming environment on Windows using Code::Blocks and the GNU GCC compiler. I also aimed to write, compile, and debug basic C programs using variables and format specifiers, and submit my work through a GitHub fork, branch, and pull request


3. Software and Hardware Environment
Operating System:  Windows 11
IDE: Code::Blocks  25.03
Compiler: GNU GCC Compiler (MinGW / WinLibs 14.2.0 bundled with Code::Blocks 25.03)
Hardware: Lenovo x280 8GB ram
4. Code::Blocks Installation and Configuration
I had previously downloaded and installed Code::Blocks and the MinGW compiler toolchain in September 2026. When preparing for this lab, I launched Code::Blocks and verified the compiler toolchain path under **Settings → Compiler → Global compiler settings → GNU GCC Compiler → Toolchain executables** to ensure the installation directory pointed to the valid MinGW folder and `gcc.exe` was selected as the C compiler. I then created a new Console Application project in C named `Kioto_C_Lab01` and opened `main.c` from the project tree.

<img width="1366" height="768" alt="Screenshot 2026-11-17 191623" src="https://github.com/user-attachments/assets/7b495b99-ebc2-4235-b8e3-0cab0a5164c9" />

5. Hello Kioto Implementation
## 5. Hello Kioto Implementation
For Exercise 1, I wrote a C program that outputs `"Hello, Kioto!"`, states that I am learning the C programming language, and displays my degree programme (`BSc. Agricultural and Biosystems Engineering`). After saving the source file (`Ctrl + S`), I built it (`Ctrl + F9`) with zero errors and executed it (`Ctrl + F10`) in the Windows console.

### Source Code (`src/exercise01_hello_kioto.c`)

6. Explanation of C Program Structure
- **`#include <stdio.h>`**: Imports the standard input/output header file so the compiler recognizes functions like `printf()`.
- **`int main(void)`**: Defines the main entry function where program execution starts and specifies that it returns an integer exit status.
- **`{ }` (Curly braces)**: Enclose the block of executable statements belonging to the `main` function.
- **`printf()`**: Sends formatted character strings and variable values to the standard console output.
- **`\n` (Newline escape sequence)**: Moves the cursor to the beginning of the next line in the terminal output.
- **`;` (Semicolon)**: Marks the end of each individual C statement so the compiler knows where one instruction finishes.
- **`return 0;`**: Terminates the `main` function and signals to the operating system that the program ran without errors.

7. Variables and Data Types
TODO: Explain the variables you declared in Exercise 2 and the format specifiers used.

8. Personalised Calculation
TODO: Explain your assigned scenario, input values, operation and result. Include your variant ID.

9. Testing and Troubleshooting
To verify that the program output was accurate without relying solely on the console display, I performed the calculation manually using a calculator (`30 × 3 = 90`). The manual result matched the `Total workstations: 90` output produced by my compiled C program, and changing an input value during testing updated the product proportionally.

10. GitHub Workflow
- **Forked Repository URL:** ``
- **Working Branch:** `student/ENB211-0061-2025/lab01`
- **Commit Summary:**
  1. `Complete hello world exercise` — implemented `src/exercise01_hello_kioto.c`.
  2. `Implement variables and personalised calculation` — completed `src/exercise02_variables.c` and `src/exercise03_personalised_calculation.c` for Variant V14.
  3. `Complete lab report and student metadata` — updated `README.md` and `report/REPORT.md`.
- **Pull Request URL:** ``

11. Screenshots
<img width="1366" height="768" alt="Screenshot 2026-11-17 191623" src="https://github.com/user-attachments/assets/2ac93d10-d213-4a7d-ac0f-68667b66e60c" />
<img width="1366" height="766" alt="Screenshot 2026-11-18 000352" src="https://github.com/user-attachments/assets/e2aea55f-e406-4f45-badf-97bc866781ea" />


12. Individual Reflection
Through this practical, I learned how C source code is translated into a Windows executable by the GCC compiler and how format specifiers control the display of different data types. The most challenging part was aligning my local September Code::Blocks setup with the exact repository file structure and variant metadata expected by the automated GitHub Actions workflow. Next time, I will inspect the repository's `.github/workflows` and `README.md` files before writing code so my filenames and metadata headers match the validation rules from the very beginning.

13. Conclusion
All objectives of Laboratory 01 were successfully achieved. The Code::Blocks and GCC environment was verified on Windows, all three C exercises compiled and produced verified outputs, and the completed source code and report were submitted via GitHub and Kioto iLMS.
